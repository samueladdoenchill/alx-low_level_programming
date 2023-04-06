#include "main.h"

/**
 * div - checks whether a given number n has a divisor
 * @a:int
 * @b:int
 * Return:Returns 1 if n has a divisor, otherwise 0.
 */
int div(int a, int b)
{
if (!(b >= 2 && b % a != 0))
return (0);
else if (a > b / 2)
return (1);
else
return (div(a + 1, b));
}

/**
 * is_prime_number - checks if a number is a prime number
 * * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (div(2, n));
}
