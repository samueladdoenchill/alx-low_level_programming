#include "main.h"

/**
 * flip_bits - Returns number of bits that need to be flipped to transform
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits that need to be flipped to transform n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int bit_count = 0;

	/* Count the number of set bits in the XOR of n and m */
	while (xor_result != 0)
	{
		bit_count += xor_result & 1;
		xor_result >>= 1;
	}

	return (bit_count);
}
