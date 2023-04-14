#include "main.h"
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up
 * to the first n characters of s2
 *
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 * @n: The maximum number of characters to concatenate from s2
 *
 * Return: On success, a pointer to a newly allocated
 * space in memory containing the concatenated string.
 * If the function fails, it should return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, total_len;
	char *result;
	unsigned int i;

	/* Get the length of s1, or set it to 0 if s1 is NULL */
	len1 = (s1 == NULL) ? 0 : strlen(s1);

	/* Get the length of s2, or set it to 0 if s2 is NULL */
	len2 = (s2 == NULL) ? 0 : strlen(s2);

	/* Limit len2 to n */
	if (len2 > n)
		len2 = n;

	/* Calculate the total length of the concatenated string */
	total_len = len1 + len2;

	/* Allocate memory for the concatenated string */
	result = malloc(sizeof(char) * (total_len + 1));
	if (result == NULL)
	{
		/* Allocation failed, return NULL */
		return (NULL);
	}

	/* Copy the characters from s1 to the result string */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	/* Copy the first n characters from s2 to the result string */
	for (i = 0; i < len2; i++)
		result[i + len1] = s2[i];

	/* Add a null terminator to the result string */
	result[total_len] = '\0';

	/* Return a pointer to the concatenated string */
	return (result);
}

