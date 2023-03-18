#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * Description: This program uses putchar to
 * print all the digits of the decimal
 * system separated by a comma and whitespace
 * without making use of a char type
 * variable
 *
 * Return: Always returns 0 (success)
 */

int main(void)
{

	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
		if (i == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
