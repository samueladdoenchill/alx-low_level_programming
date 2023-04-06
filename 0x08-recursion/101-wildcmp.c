#include "main.h"
/**
* wildcmp - The function compares two strings to see
* if they are exactly the same.
* @s1: First string
* @s2: Second string
*
* Return: returns 1 if they are exactly
* the same otherwise 0
*/

int wildcmp(char *s1, char *s2)
{
(s2[0] == '\0')
return (*s1 == '\0');
if (*s2 == *s1)
return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
return (0);
}
