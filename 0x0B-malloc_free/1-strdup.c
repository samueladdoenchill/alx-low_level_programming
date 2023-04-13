#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	unsigned int i, length;
	char *dup_str;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
		length++;

	dup_str = malloc(sizeof(char) * (length + 1));
	if (dup_str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		dup_str[i] = str[i];
	dup_str[i] = '\0';

	return (dup_str);
}

