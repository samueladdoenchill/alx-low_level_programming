#include "main.h"

#define BUFFER_SIZE 1024

/**
 * file_closure - closes a given file descriptor
 * @file_desc: The file descriptor to be closed
 */
void file_closure(int file_desc)
{
	int closure = close(file_desc);

	if (closure < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc);
		exit(100);
	}
}

/**
 * main - program to copy the content of a file to another
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0 if successful,if failed, return an error code
 */
int main(int argc, char *argv[])
{
	/* Declarations */
	int file_desc_source, file_desc_dest, read_file, write_file;
	/* Declare the buffer*/
	char buffer[BUFFER_SIZE];
	/* Check if the argument number is okay */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	/* Open the source file in read-only mode */
	file_desc_source = open(argv[1], O_RDONLY);
	if (file_desc_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_desc_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_desc_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
		read_file = read(file_desc_source, buffer, BUFFER_SIZE);
		if (read_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		write_file = write(file_desc_dest, buffer, read_file);
		if (write_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (read_file > 0);
	file_closure(file_desc_source);
	file_closure(file_desc_dest);
	return (0);
}

