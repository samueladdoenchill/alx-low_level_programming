#include "main.h"

/**
 * _calloc - Allocates memory for an array of nmemb elements
 * of size bytes each, and returns a pointer to the
 * allocated memory.
 *
 * @nmemb: The number of elements to allocate memory for.
 * @size: The size of each element in bytes.
 *
 * Return: On success, a pointer to the allocated memory. On failure, NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	/* Check if nmemb or size is 0, return NULL if so */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory for nmemb elements of size bytes each */
	ptr = malloc(nmemb * size);

	/* If allocation fails, return NULL */
	if (ptr == NULL)
		return (NULL);

	/* Set all bytes in the allocated memory to 0 */
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	/* Return a pointer to the allocated memory */
	return ((void *)ptr);
}

