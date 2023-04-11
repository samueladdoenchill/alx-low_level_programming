#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *
 * @dest: pointer to the buffer
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int length, i;

length = 0;

while (src[length] != '\0')
{
length++;
}

i = 0;
while (i < length)
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}
