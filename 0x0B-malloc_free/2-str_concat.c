#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - joins  two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	size_t s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	concatenated = malloc(s1_len + s2_len + 1);
	if (concatenated == NULL)
		return (NULL);

	memcpy(concatenated, s1, s1_len);
	memcpy(concatenated + s1_len, s2, s2_len + 1);

	return (concatenated);
}

