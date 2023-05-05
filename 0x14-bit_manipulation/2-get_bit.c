#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number for searching index bit
 * @index: starting from 0 of the bit I wanna achieve
 *
 * Description: This function takes an unsigned long integer and a bit index
 * and returns the value of the bit at the given index.
 *
 * Return: the value of the bit at index index or -1 if an error happens
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index; /* set mask to 1 shifted to the index position */

	return ((n & mask) != 0); /* return 1 or 0 based on value at given index */
}
