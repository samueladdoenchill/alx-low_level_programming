#include "main.h"

/**
 * flip_bits - Counts the number of bits to change to get
 *             from one number to another.
 *
 * @num1: First number.
 * @num2: Second number.
 *
 * Return: Number of bits to change.
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	int index, count = 0;
	unsigned long int current;
	unsigned long int xor_result = num1 ^ num2;

	/* Iterate through each bit of the XOR result */
	for (index = 63; index >= 0; index--)
	{
		current = xor_result >> index;

		/* Check if the current bit is 1 and increment the count */
		if (current & 1)
			count++;
	}

	return (count); /* Return the number of bits to change */
}

