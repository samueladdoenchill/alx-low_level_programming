#include "variadic_functions.h"

/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list a_list;
const char *p;
char *str;
int first_arg = 1;

va_start(a_list, format);

for (p = format; p && *p; p++)
{
switch (*p)
{
case 'c':
printf("%s%c", first_arg ? "" : ", ", va_arg(a_list, int));
break;
case 'i':
printf("%s%i", first_arg ? "" : ", ", va_arg(a_list, int));
break;
case 'f':
printf("%s%f", first_arg ? "" : ", ", va_arg(a_list, double));
break;
case 's':
str = va_arg(a_list, char *);
printf("%s%s", first_arg ? "" : ", ", str ? str : "(nil)");
break;
default:
break;
}
first_arg = 0;
}

printf("\n");
va_end(a_list);
}
