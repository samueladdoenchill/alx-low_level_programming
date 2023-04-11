#include "main.h"
/**
 * _strncat - concatenate two strings
 *@dest: where memory is kept
 *@src: where memory is retreived
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
char *p = dest;
while (*p)
{
p++;
}

while (*src && i < n)
{
*p++ = *src++;
i++;
}
*p = '\0';
return (dest);
}
