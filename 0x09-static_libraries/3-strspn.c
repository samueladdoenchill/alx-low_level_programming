#include "main.h"

/**
 * _strspn - length of a prefix substring
 * @s: the string
 * @accept: the string to
 * Return: the number of bytes
 * contain only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int num1, num2, len_string = 0;
char *ptr;

for (num1 = 0; s[num1] != '\0'; num1++)
{
ptr = accept;
for (num2 = 0; *(ptr + num2) != '\0'; num2++)
{
if (s[num1] == *(ptr + num2))
{
len_string++;
break;
}
}
if (*(ptr + num2) == '\0')
return (len_string);
}
return (len_string);
}
