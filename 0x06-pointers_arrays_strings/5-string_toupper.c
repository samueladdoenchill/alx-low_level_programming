#include "main.h"

/**
 * string_toupper - converts letters in a string to uppercase
 * @v: input string
 * Return: returns the converted string
 */

char *string_toupper(char *v)
{
	char *u;
	size_t i;

	u = malloc(strlen(v));
	i = 0;

	while (i < strlen(v))
	{
		if (v[i] >= 'a' && v[i] <= 'z')
		{
			u[i] = toupper(v[i]);
		}
		else
		{
			u[i] = v[i];
		}
		i++;
	}

	for (i = 0; i < strlen(v); i++)
	{
		v[i] = u[i];
	}

	return (v);
}
