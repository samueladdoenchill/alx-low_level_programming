#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * Description: This program uses putchar to
 * print all the digits of the hexadecimal
 * system
 *
 * Return: Always returns 0 (success)
 */

int main(void)
{
	char b16digits[] = "0123456789abcdef\n";
	size_t i;

	for (i = 0; i < strlen(b16digits); i++)
	{
		putchar(b16digits[i]);
	}

	return (0);
}
