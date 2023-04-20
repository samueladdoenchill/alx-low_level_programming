#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
/* Check if pointer to function is not NULL */
if (!f)
{
printf("Error: Printing function is NULL\n");
return;
}

/* Check if name is not NULL */
if (!name)
{
printf("Error: Name is NULL\n");
return;
}

/* Call the printing function with the given name */
f(name);
}
