#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{

char *string_ptr, *separator_ptr = "";
va_list arguments;
const char *p = format;

va_start(arguments, format);

while (p && *p)
{
switch (*p)
{
case 'c':
	printf("%s%c", separator_ptr, va_arg(arguments, int));
	break;
case 'i':
	printf("%s%d", separator_ptr, va_arg(arguments, int));
	break;
case 'f':
	printf("%s%f", separator_ptr, va_arg(arguments, double));
	break;
case 's':
	string_ptr = va_arg(arguments, char *);
	if (!string_ptr)
		string_ptr = "(nil)";
	printf("%s%s", separator_ptr, string_ptr);
	break;
default:
	p++;
	continue;
}
separator_ptr = ", ";
p++;
}
printf("\n");
va_end(arguments);
}
