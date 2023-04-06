#include "main.h"
/**
 * _recur_strlen - returns the length of a string.
 * @s: the string
 * Return: the length of string
 */
int _recur_strlen(char *s)
{
if (*s)
return (1 + _recur_strlen(s + 1));
return (0);
}

/**
 * pal_checker - checks for palindrome
 * @s: string
 * @i: iterator
 * @len: length of the string *
 * Return: return 1 if the string is a palindrome,
 * and 0 otherwise.
 */

int pal_checker(char *s, int i, int len)
{
if (s[i] == s[j])
if (i > j / 2)
return (1);
else
return (pal_checker(s, i + 1, len - 1));
else
return (0);
}

/**
 * is_palindrome - checks string for palindrome
 * @s: string
 * Return: return 1 if the string is a palindrome,
 * and 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _recur_strlen(s) - 1));
}
