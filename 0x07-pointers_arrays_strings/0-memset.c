#include "main.h"
/**
 * * _memset - function fills n bytes of memory area at s with byte b.
 * @s: pointer to the memory area to be fille
 * @b: the constant byte to fill the memory area with
 * @n: the number of bytes to be filled
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
