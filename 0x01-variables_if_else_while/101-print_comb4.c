#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * Description: This program uses putchar to
 * print all the possible combination of three
 * digits of the decimal system separated by
 * a comma and whitespace
 * without making use of a char type
 * variable such that the first digit in each
 * combination is less than the second. Same
 * relationship applies between second and third
 *
 * Return: Always returns 0 (success)
 */

int main(void)
{

	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if ((i < j) && (j < k))
				{
					putchar(i % 10 + '0');
					putchar(j % 10 + '0');
					putchar(k % 10 + '0');
					if ((i == 7) && (j == 8) && (k == 9))
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
