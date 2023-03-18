#include <stdio.h>
/**
 * main - entry point
 * Description: This program uses putchar to
 * print all the english alphabets in reverse
 *
 * Return: Always returns 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
