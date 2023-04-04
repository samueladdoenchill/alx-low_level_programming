#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strchr - lets you know the first occurance of c in the string s
 * @s: the string in which to check for c
 * @c: the character to check for in s
 *
 * Return: a pointer to the first occurrence of char c in s else NULL
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
