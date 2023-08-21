#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks if an input is a decimal digit
 *
 * @c: the input
 *
 * Return: returns 1 if uppercase else 0
 */

int _isdigit(int c)
{
	int res;

	if (c >= '0' && c <= '9')
	{
		res = 1;
	}
	else
	{
		res = 0;
	}

	return (res);
}
