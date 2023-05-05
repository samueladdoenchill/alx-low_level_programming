#include "main.h"

/**
 * clear_bit -  Sets value of bit to 0 at specific index
 * @index: Begins at 0 to bit I want to set
 * @n: Pointer to number to clear bit in
 *
 * Return: 1 if successful, or -1 if error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int masking;

	/* Verify that the bit index is within the valid range */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* Create a bit mask with a 0 at the specified index */
	masking = ~(1ul << index);

	/* Use the bit mask to clear the bit at the specified index */
	*n &= masking;

	return (1);
}

