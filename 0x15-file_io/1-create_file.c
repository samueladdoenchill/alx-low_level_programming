#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: pointer to the name of the file to create
 * @text_content: a null terminated string to write to the file
 *
 * Return: 1 on success, -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc;  /* file descriptor for the created file */
	int write_hold; /* hold the return value of write system call */
	int size = 0;   /* size of the text_content */

	/* Check if the filename is NULL*/
	if (!filename)
		return (-1);

	if (text_content)
	{
		/* Get the length of the text_content */
		while (text_content[size])
			size++;
	}

	/* Create the file with read and write permissions */
	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	/* Check if the file has been created */
	if (file_desc == -1)
		return (-1);

	/* Write the content to file */
	write_hold = write(file_desc, text_content, size);

	/* Check if the write has failed */
	if (write_hold == -1)
	{
		close(file_desc);
		return (-1);
	}

	close(file_desc);
	return (1);
}

