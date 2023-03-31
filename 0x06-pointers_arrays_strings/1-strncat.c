#include "main.h"

/**
 * _strncat - imitates the strncat of the standard library
 * @dest: first string input
 * @src: string to add to first string input
 * @n: number of bytes of string in second string to add to first string
 *
 * Return: returns the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *v;
	int count;
	int l;


	l = (int) strlen(src);
	v = dest;

	while (*v != '\0')
	{
		v++;
	}

	count = 0;

	while (count < n && *src != '\0')
	{
		*v++ = *src++;
		count++;
	}

	if (l < n)
	{
		*v++ = '\0';
	}
	return (dest);
}
