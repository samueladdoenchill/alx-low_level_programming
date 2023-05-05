#include "main.h"

/**
 * set_bit - Sets value of bit at given index to 1
 * @n: Pointer to number to set the in
 * @index: Index of bit to set to 1, starting from 0
 *
 * Description: This function sets the value of a bit at a given index to 1.
 *
 * Return: 1 if it worked, or -1 if an error happened
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Set the bit at the given index to 1 using bitwise OR */
	*n |= (1UL << index);

	/* Return 1 to indicate success */
	return (1);
}

