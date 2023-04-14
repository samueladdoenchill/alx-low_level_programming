#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc and
 * checks if it was successful
 *
 * @b: The amount of memory to allocate
 *
 * Return: On success, a pointer to the allocated memory
 *         On failure, exits the program with status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);  /* Allocate memory using malloc */
	if (ptr == NULL)  /* Check if malloc was successful */
		exit(98);  /* Exit the program with a status value of 98 */

	return (ptr);  /* Return a pointer to the allocated memory */
}

