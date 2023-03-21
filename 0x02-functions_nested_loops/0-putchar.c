#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: Outputs the string "_putchar"
 * to standard output
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int i;

	char v[] = "_putchar\n";

	for (i = 0; i < 9; i++)
	{
		putchar(v[i]);
	}
	return (0);
}
