#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print lowercase english alphabets
 * 10 times. Each on a separate line
 *
 * Return: Always 0 (success)
 *
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
