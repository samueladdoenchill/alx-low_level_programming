#include "main.h"
/**
 * _sqrt - calculates natural square root of a number
 *
 * @n: the input number to calculate the natural square root
 * @i: iterator
 * Return: the square root
 */
int _sqrt(int n, int i)
{
if (i > n / i)
return (-1);
if (i * i == n)
return (i);
return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - calculates natural square root of a number
 * _sqrt - calculates natural square root of a number
 *
 * @n: the input number to calculate the natural square root
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt(n, 1));
}
