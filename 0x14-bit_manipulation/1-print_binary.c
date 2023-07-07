#include "main.h"

/**
 * print_binary - Prints the binary equivalent of a decimal number.
 * @num: Number to print in binary.
 *
 * Description: This function takes a decimal number and prints
 * its binary representation.
 * It starts from the most significant bit and goes to the least
 * significant bit.
 * If the binary representation contains leading zeros, they are omitted.
 */
void print_binary(unsigned long int num)
{
	int index, count = 0;
	unsigned long int current;

	/* Iterate through each bit of number starting from most significant bit */
	for (index = 63; index >= 0; index--)
	{
		/* Right-shift the number by the current bit position */
		current = num >> index;

		/* Check if the current bit is 1 and print '1' */
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		/* Check if leading zeros have been encountered and print '0' */
		else if (count)
			_putchar('0');
	}

	/* If the number is zero, print '0' */
	if (!count)
		_putchar('0');
}

