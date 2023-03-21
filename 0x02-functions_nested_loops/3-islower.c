#include <stdio.h>
#include "main.h"

/**
 * _islower - checks whether an input value is lowercase or not
 *
 * c is the input parameter to the _islower function
 * Return: returns 1 when the input is lowercase and 0 if otherwise
 *
 */

int _islower(int c)
{
	int res;

	if (c >= 'a' && c <= 'z')
	{
		res = 1;
	}
	else
	{
		res = 0;
	}

	return (res);
}
