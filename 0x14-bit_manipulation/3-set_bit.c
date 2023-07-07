#include "main.h"

/**
 * set_bit - Sets a bit at a given index to 1.
 *
 * @num_ptr: Pointer to the number to change.
 * @index: Index of the bit to set to 1.
 *
 * Return: 1 for success, -1 for failure.
 */
int set_bit(unsigned long int *num_ptr, unsigned int index)
{
	if (index > 63) /* Check if index is within range */
		return (-1);

	/* Set the bit at the specified index to 1 */
	*num_ptr = ((1UL << index) | *num_ptr);

	return (1); /* Return 1 to indicate success */
}

