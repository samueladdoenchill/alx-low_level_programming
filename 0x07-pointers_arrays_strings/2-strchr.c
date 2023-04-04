#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @c: character to locate
 *
 * @s: pointer to the string to search
 *
 * Return: a pointer to the first occurrence of @c in @s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
