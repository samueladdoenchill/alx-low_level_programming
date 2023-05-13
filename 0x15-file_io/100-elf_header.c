#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>

#define EI_NIDENT 16

/**
 * print_magic - prints the magic number of the ELF header
 * @e_ident: the ELF header identifier array
 */
void print_magic(unsigned char *e_ident)
{
    int i;

    printf("ELF Header:\n  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", e_ident[i]);
    printf("\n");
}

/**
 * print_class - prints the class of the ELF header
 * @e_ident: the ELF header identifier array
 */
void print_class(unsigned char *e_ident)
{
    printf("  Class:                             ");
    switch (e_ident[EI_CLASS])
    {
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
            break;
    }
}

int main(int argc, char **argv)
{
    Elf32_Ehdr *ehdr;
    int fd;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("open");
        exit(EXIT_FAILURE);
    }

    ehdr = malloc(sizeof(*ehdr));
    if (ehdr == NULL)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    if (read(fd, ehdr, sizeof(*ehdr)) != sizeof(*ehdr))
    {
        fprintf(stderr, "Error: Not a valid ELF file\n");
        exit(EXIT_FAILURE);
    }

    print_magic(ehdr->e_ident);
    print_class(ehdr->e_ident);

    free(ehdr);
    close(fd);
    return (EXIT_SUCCESS);
}

