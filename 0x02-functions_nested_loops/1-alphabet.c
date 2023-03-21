#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print lowercase english alphabets
 *
 * Return: Always 0 (success)
 *
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
