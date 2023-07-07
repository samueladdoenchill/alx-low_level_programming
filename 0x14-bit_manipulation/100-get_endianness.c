#include "main.h"

/**
 * get_endianness - Checks if a machine is little or big endian.
 *
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	/*
	 * By accessing the first byte of the unsigned integer,
	 * we can determine the endianness of the machine.
	 * If the value is 1, it indicates little endian, otherwise big endian.
	 */
	return (*byte);
}

