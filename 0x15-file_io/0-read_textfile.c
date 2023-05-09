#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to stdout.
 * @filename: A pointer to the file to be opened.
 * @letters: The number of letters to be printed.
 *
 * Return: The actual number of letters it could read and print. If the file
 * couldn't be opened or filename is NULL return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int *text_buffer;
	int file_desc;
	int byte_count;

	/* Check if the filename is NULL */
	if (filename == NULL)
		return (0);
	/* Allocate memory for the text buffer */
	text_buffer = malloc(sizeof(char) * letters);
	if (!text_buffer)
		return (0);
	/* Open the file for reading */
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		free(text_buffer);
		return (0);
	}
	/* Read from the file into the buffer */
	byte_count = read(file_desc, text_buffer, letters);
	if (byte_count == -1)
	{
		free(text_buffer);
		close(file_desc);
		return (0);
	}
	/* Write the contents of the buffer to stdout */
	if (write(STDOUT_FILENO, text_buffer, byte_count) != byte_count)
	{
		free(text_buffer);
		close(file_desc);
		return (0);
	}
	/* Free the memory and close the file descriptor */
	free(text_buffer);
	close(file_desc);
	/* Return the actual number of letters read and printed */
	return (byte_count);
}
