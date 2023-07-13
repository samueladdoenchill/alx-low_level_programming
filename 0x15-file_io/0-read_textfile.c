#include "main.h"
#include <stdlib.h>

/* 
 * readTextFile - Reads a text file and prints its content to STDOUT.
 * @fileName: The name of the text file to be read.
 * @numLetters: The maximum number of letters to be read.
 * 
 * Return: The actual number of bytes read and printed.
 *         Returns 0 when the function fails or the filename is NULL.
 */
ssize_t readTextFile(const char *fileName, size_t numLetters)
{
	char *buffer;
	ssize_t fileDescriptor;
	ssize_t bytesWritten;
	ssize_t bytesRead;

	/* Open the file in read-only mode */
	fileDescriptor = open(fileName, O_RDONLY);
	if (fileDescriptor == -1)
		return (0);

	/* Allocate memory for the buffer */
	buffer = malloc(sizeof(char) * numLetters);

	/* Read data from the file into the buffer */
	bytesRead = read(fileDescriptor, buffer, numLetters);

	/* Write the data from the buffer to STDOUT */
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	/* Free the allocated memory and close the file */
	free(buffer);
	close(fileDescriptor);

	/* Return the number of bytes written to STDOUT */
	return (bytesWritten);
}

