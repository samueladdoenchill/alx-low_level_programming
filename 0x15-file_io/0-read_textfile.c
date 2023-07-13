#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read a text file and print its contents to STDOUT.
 * @filename: The name of the text file being read.
 * @max_letters: The maximum number of letters to be read.
 *
 * Return: The actual number of bytes read and printed.
 *         Returns 0 when the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t max_letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t bytes_written;
	ssize_t bytes_read;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * max_letters);
	bytes_read = read(file_descriptor, buffer, max_letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file_descriptor);
	return (bytes_written);
}

