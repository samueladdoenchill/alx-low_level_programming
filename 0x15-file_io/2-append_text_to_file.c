#include "main.h"

/**
 * append_text_to_file - Adds text at the end of a file.
 * @filename: A pointer to the file name.
 * @text_content: The string to be appended to the file.
 *
 * Return: -1 if the function fails or if filename is NULL.
 *         -1 if the file does not exist or the user lacks write permissions.
 *         1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	bytes_written = write(file_descriptor, text_content, len);

	if (file_descriptor == -1 || bytes_written == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}

