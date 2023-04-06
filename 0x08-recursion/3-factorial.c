#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: number
 *
 * Return: int factorial of n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (!n)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
