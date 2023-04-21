#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: the sum of all parameters, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list ap;

if (n == 0)
return (0);

va_start(ap, n);

for (i = 0; i < n; i++)
sum += va_arg(ap, int);

va_end(ap);

return (sum);
}
