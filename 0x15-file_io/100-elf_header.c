#include <stdio.h>
#include <elf.h>

/*
 * print_magic - Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 * Description: Magic numbers are separated by spaces.
*/
void print_magic(unsigned char *e_ident) {
    int i;

    printf("Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", e_ident[i]);
    }
    printf("\n");
}

/*
 * Function: print_class
 * ---------------------
 * Prints the class of the ELF object file.
 *
 * e_ident: The identification bytes of the ELF header.
 */
void print_class(unsigned char *e_ident) {
    printf("Class:   ");
    switch (e_ident[EI_CLASS]) {
        case ELFCLASSNONE:
            printf("none\n");
            break;
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: %x>\n", e_ident[EI_CLASS]);
    }
}

/*
 * Function: print_data
 * --------------------
 * Prints the endianness of the ELF object file.
 *
 * e_ident: The identification bytes of the ELF header.
 */
void print_data(unsigned char *e_ident) {
    printf("Data:    ");
    switch (e_ident[EI_DATA]) {
        case ELFDATANONE:
            printf("none\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown: %x>\n", e_ident[EI_DATA]);
    }
}

int main(int argc, char **argv) {
    FILE *fp;
    Elf64_Ehdr elf_header;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    fp = fopen(argv[1], "rb");
    if (fp == NULL) {
        perror("fopen");
        return 1;
    }

    if (fread(&elf_header, sizeof(elf_header), 1, fp) != 1) {
        perror("fread");
        return 1;
    }

    if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
            elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
            elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
            elf_header.e_ident[EI_MAG3] != ELFMAG3) {
        fprintf(stderr, "%s is not an ELF file\n", argv[1]);
        return 1;
    }

    print_magic(elf_header.e_ident);
    print_class(elf_header.e_ident);
    print_data(elf_header.e_ident);

    fclose(fp);
    return 0;
}

