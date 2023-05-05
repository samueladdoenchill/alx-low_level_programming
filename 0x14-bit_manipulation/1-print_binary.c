#include "main.h"

/**
 * print_binary - Prints binary representation of number
 * @n: Number to be printed
 *
 * Description: Function takes unsigned long integer and prints
 * its binary representation.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int seen = 0;

	/* Loop through each bit in the number */
	while (mask != 0)
	{
		if (n & mask) /* If the bit is 1, print 1 and set seen flag */
		{
			_putchar('1');
			seen = 1;
		}
		else if (seen) /* If the bit is 0 and seen flag is set, print 0 */
		{
			_putchar('0');
		}
		mask >>= 1; /* Shift the mask one bit to the right */
	}

	if (!seen) /* If the number was 0, print 0 */
	{
		_putchar('0');
	}
}

