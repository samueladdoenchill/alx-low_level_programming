#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - The function searches a string,
 * for a set of bytes.
 * @s: The string
 * @accept: The bytes
 * Return: A pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
char *rec;

while (*s)
{
for (rec = accept; *rec; rec++)
{
if (*s == *rec)
return (s);
}
s++;
}
return (NULL);
}
