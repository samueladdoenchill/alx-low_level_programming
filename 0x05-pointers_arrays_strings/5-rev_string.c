#include "main.h"
#include <string.h>
/**
 * rev_string - prints a string to stdout but in reverse
 *
 * @s: the string to print in reverse
 * Return: returns nothing
 */

void rev_string(char *s)
{
	int i, j;
	char *v;

	j = 0;
	v = s;
	i = strlen(s) - 1;
	while (i >= 0)
	{
		v[j] = s[i];
		i--;
		j++;
	}
	*s = *v;
}
