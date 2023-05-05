#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - Changes binary number to an unsigned int
 * @b: it must point to string of 0 and 1 chars
 *
 * Description: Changes binary number to unsigned int
 *
 * Return: Converted number, or 0 if error occurs
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	/* Get the length of the string */
	while (b[len])
		len++;

	/* Convert the binary number to an unsigned int */
	do {
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = result << 1;
		if (b[i] == '1')
			result += 1;
		i++;
	} while (i < len);

	return (result);
}

