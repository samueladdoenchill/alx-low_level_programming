#include <stdio.h>
#include <string.h>
/**
 * Description: This program uses putchar to
 * print all the digits of the decimal
 * system
 *
 * Return: Always returns 0 (success)
 */

int main(void)
{
	char digits[] = "0123456789\n";
	size_t i;

	for (i = 0; i < strlen(digits); i++)
	{
		putchar(digits[i]);
	}

	return (0);
}
