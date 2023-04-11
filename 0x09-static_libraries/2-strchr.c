#include "main.h"
#include <stdio.h>

/**
 * *_strchr - finds character in a string
 * @s: string
 * @c: char
 *
 * Return: Always 0 (Success)
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
