#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @binary: String containing the binary number.
 *
 * Return: The converted number as an unsigned int.
 */
unsigned int binary_to_uint(const char *binary)
{
	int index;
	unsigned int decimal_value = 0;

	if (!binary)
		return (0);

	/* Iterate through the binary string */
	for (index = 0; binary[index]; index++)
	{
		/* Check for invalid characters */
		if (binary[index] < '0' || binary[index] > '1')
			return (0);

		/* Convert binary to decimal */
		decimal_value = 2 * decimal_value + (binary[index] - '0');
	}

	/* Return the converted decimal value */
	return (decimal_value);
}

