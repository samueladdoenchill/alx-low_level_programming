#include "main.h"
/**
 * _strlen_recursion - function computes the length of a string.
 * @s: the string be calculated.
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}
else
{
1 + _strlen_recursion(s + 1);
}
}
