#include "variadic_functions.h"

/**
 * print_all - prints any combination of char, int, float, and string arguments
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	/* initialize pointers and arguments */
	char *string_ptr, *separator_ptr = "";
	va_list arguments;
	const char *p = format;

	va_start(arguments, format);
	/* iterate through the format string and print each argument */
	while (p != NULL && *p != '\0')
	{
		switch (*p)
		{
			case 'c': /* char argument */
				printf("%s%c", separator_ptr, va_arg(arguments, int));
				break;
			case 'i': /* int argument */
				printf("%s%d", separator_ptr, va_arg(arguments, int));
				break;
			case 'f': /* float argument */
				printf("%s%f", separator_ptr, va_arg(arguments, double));
				break;
			case 's': /* string argument */
				string_ptr = va_arg(arguments, char *);
				if (string_ptr == NULL)
					string_ptr = "(nil)"; /* handle null pointer */
				printf("%s%s", separator_ptr, string_ptr);
				break;
			default: /* unrecognized type */
				break;
		}
		separator_ptr = ", "; /* set the separator for the next argument */
		p++;
	}

	printf("\n");
	/* print newline character after all arguments have been printed */
	va_end(arguments); /* clean up arguments list */
}

