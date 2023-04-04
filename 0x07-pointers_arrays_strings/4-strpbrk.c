
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string.
 * @accept: The set of byte.
 *
 * Return: ia pointer to matched byte if set is found, otherwise NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
