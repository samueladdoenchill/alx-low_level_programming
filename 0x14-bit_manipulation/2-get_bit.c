#include "main.h"

/**
 * get_bit - Returns the value of a bit at a specific
 *            index in a decimal number.
 *
 * @num: Number to search.
 * @index: Index of the bit.
 *
 * Return: Value of the bit at the specified index.
 */
int get_bit(unsigned long int num, unsigned int index)
{
	int bit_value;

	if (index > 63) /* Check if index is within range */
		return (-1);

	bit_value = (num >> index) & 1; /* Extract the bit at the specified index */

	return (bit_value); /* Return the value of the bit */
}

