#include "main.h"
/**
 * _pow_recursion - calculates the results of x raised to
 * the power of y
 *
 * @x: int to be raised
 * @y: value of power
 * Return: -1,1 or power of x raised to the power y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (!y)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
