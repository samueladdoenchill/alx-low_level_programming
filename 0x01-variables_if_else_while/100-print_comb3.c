#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * Description: This program uses putchar to
 * print all the possible combination of two
 * digits of the decimal system separated by
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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i < j)
			{
				putchar(i % 10 + '0');
				putchar(j % 10 + '0');
				if ((i == 8) && (j == 9))
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
