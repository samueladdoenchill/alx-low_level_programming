#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *filename);
void close_file_descriptor(int file_descriptor);

/**
 * allocate_buffer - Allocates 1024 bytes for a buffer.
 * @filename: The name of the file the buffer is storing characters for.
 *
 * Return: A pointer to the newly allocated buffer.
 */
char *allocate_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file_descriptor - Closes file descriptors.
 * @file_descriptor: The file descriptor to be closed.
 */
void close_file_descriptor(int file_descriptor)
{
	int result;

	result = close(file_descriptor);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file_descriptor);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: (0) on success.
 *
 * Description: If the argument count is incorrect, exit with code 97.
 * If file_from does not exist or cannot be read, exit with code 98.
 * If file_to cannot be created or written to, exit with code 99.
 * If file_to or file_from cannot be closed, exit with code 100.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_bytes, write_bytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = allocate_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	read_bytes = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || read_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Unable to read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_bytes = write(file_to, buffer, read_bytes);
		if (file_to == -1 || write_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Unable to write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_bytes = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_bytes > 0);

	free(buffer);
	close_file_descriptor(file_from);
	close_file_descriptor(file_to);

	return (0);
}

