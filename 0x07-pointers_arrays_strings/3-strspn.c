#include "main.h"
/**
 * _strspn - gets the length of a prefix substring with bytes in @accept
 *
 * @s: pointer to the string to be searched
 *
 * @accept: pointer to acceptable characters
 *
 * Return: number of bytes in @s with characters in @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int z = 0, x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					z++;
			}
		}
		else
			return (z);
	}
		return (z);

}
