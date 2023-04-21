#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed to the function separated
 * by a separator string.
 * @separator: A string that is used to separate strings.
 * If NULL, no separator is printed.
 * @n: The number of unnamed parameters.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(ap, const char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(ap);
}

