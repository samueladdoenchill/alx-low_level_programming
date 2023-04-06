#include "main.h"
/**
 * _print_rev_recursion - The function outputs a string in reverse order.
 * @s:The string that will be printed.
 * Return:void
 */
void _print_rev_recursion(char *s)
{
if (!(*s))
{
return;
}
else
{
	_puts_recursion(s + 1);
	_putchar(*s);
}

}
