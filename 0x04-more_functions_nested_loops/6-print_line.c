#include "main.h"
/**
 * print_line - draws a line using a number of underscores based on user input
 * @n: the input
 *
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		putchar('_');
		i++;
	}
	putchar('\n');

}
