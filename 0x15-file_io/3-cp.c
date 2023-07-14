#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocateBuffer(char *file);
void closeFile(int fd);

/**
 * allocateBuffer - Allocates 1024 bytes of memory for a buffer.
 * @file: The name of the file for which the buffer is being allocated.
 *
 * Return: A pointer to the newly allocated buffer.
 */
char *allocateBuffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Unable to write to %s\n", file);
		exit(99);
	}

	return buffer;
}

/**
 * closeFile - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void closeFile(int fd)
{
	int result;

	result = close(fd);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of one file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: Exits with exit codes:
 *   - 97 if the argument count is incorrect.
 *   - 98 if fileFrom does not exist or cannot be read.
 *   - 99 if fileTo cannot be created or written to.
 *   - 100 if fileTo or fileFrom cannot be closed.
 */
int main(int argc, char *argv[])
{
	int fileFrom, fileTo, readBytes, writtenBytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp fileFrom fileTo\n");
		exit(97);
	}

	buffer = allocateBuffer(argv[2]);
	fileFrom = open(argv[1], O_RDONLY);
	readBytes = read(fileFrom, buffer, 1024);
	fileTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fileFrom == -1 || readBytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Unable to read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		writtenBytes = write(fileTo, buffer, readBytes);
		if (fileTo == -1 || writtenBytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Unable to write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		readBytes = read(fileFrom, buffer, 1024);
		fileTo = open(argv[2], O_WRONLY | O_APPEND);
	} while (readBytes > 0);

	free(buffer);
	closeFile(fileFrom);
	closeFile(fileTo);

	return 0;
}

