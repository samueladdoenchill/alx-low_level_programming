#include "main.h"
/**
 * swap_int - swaps the value of two integers
 *
 * @a: the input to the function
 * @b: second input integer
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int na, nb;

	na = *a;
	nb = *b;

	*a = nb;
	*b = na;
}
