#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Name of the file to append to.
 * @text_content: A null-terminated string to add to the end of the file.
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int write_holder;
	int size = 0;

	/* Check if the filename is NULL*/
	if (!filename)
		return (-1);

	/* Open the file for appending */
	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	/* Check if the file has been opened */
	if (file_descriptor == -1)
		return (-1);

	/* If the text_content is not null, append it to the file */
	if (text_content != NULL)
	{
		size = 0;

		/* Get the length of the text_content */
		while (text_content[size])
			size++;

		/* Write the content to the file */
		write_holder = write(file_descriptor, text_content, size);

		/* Check if the write has failed */
		if (write_holder == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	/* Close the file and return success */
	close(file_descriptor);
	return (1);
}

