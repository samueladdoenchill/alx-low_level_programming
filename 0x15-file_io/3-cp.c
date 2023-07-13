#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *file);
void close_file_descriptor(int fd);

/**
 * allocate_buffer - Allocates 1024 bytes of memory for a buffer.
 * @file_name: The name of the file for which the buffer is being allocated.
 *
 * Return: A pointer to the newly allocated buffer.
 */
char *allocate_buffer(char *file_name)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Unable to allocate memory for %s\n", file_name);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file_descriptor - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file_descriptor(int fd)
{
	int result;

	result = close(fd);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to close file descriptor %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of one file to another.
 * @arg_count: The number of arguments supplied to the program.
 * @arg_values: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect, exit with code 97.
 * If source_file does not exist or cannot be read, exit with code 98.
 * If destination_file cannot be created or written to, exit with code 99.
 * If destination_file or source_file cannot be closed, exit with code 100.
 */
int main(int arg_count, char *arg_values[])
{
	int source_fd, dest_fd, bytes_read, bytes_written;
	char *buffer;

	if (arg_count != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp source_file destination_file\n");
		exit(97);
	}

	buffer = allocate_buffer(arg_values[2]);
	source_fd = open(arg_values[1], O_RDONLY);
	bytes_read = read(source_fd, buffer, 1024);
	dest_fd = open(arg_values[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do

	{
		if (source_fd == -1 || bytes_read == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Unable to read from file %s\n", arg_values[1]);
			free(buffer);
			exit(98);
		}

		bytes_written = write(dest_fd, buffer, bytes_read);
		if (dest_fd == -1 || bytes_written == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Unable to write to %s\n", arg_values[2]);
			free(buffer);
			exit(99);
		}

		bytes_read = read(source_fd, buffer, 1024);
		dest_fd = open(arg_values[2], O_WRONLY | O_APPEND);

	} while (bytes_read > 0);

	free(buffer);
	close_file_descriptor(source_fd);
	close_file_descriptor(dest_fd);

	return (0);
}

