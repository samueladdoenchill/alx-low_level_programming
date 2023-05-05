#include "main.h"

/**
 * get_endianness - The function checks endianness
 *
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	unsigned int test_number = 1;
	char *byte_ptr = (char *)&test_number;

	/* If the first byte of the test number is 1, it means it is little endian */
	if (*byte_ptr)
	{
		return (1);
	}
	/* Otherwise, it is big endian */
	else
	{
		return (0);
	}
}

