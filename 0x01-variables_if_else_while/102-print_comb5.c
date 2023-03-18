#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * Description: This program uses putchar to
 * print all the possible combination of two
 * two-digit numbers separated by
 *  a comma and whitespace
 * without making use of a char type
 * variable such that the first digit in each
 * combination is less than the second.
 *
 * Return: Always returns 0 (success)
 */

int main(void)
{

	int i;
	int j;
	int ii, jj;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				ii = i / 10;
				jj = j / 10;
				putchar(ii % 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(jj % 10 + '0');
				putchar(j % 10 + '0');
				if ((i == 98) && (j == 99))
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
