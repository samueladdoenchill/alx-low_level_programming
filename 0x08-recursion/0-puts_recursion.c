#include "main.h"
/**
 * _puts_recursion - prints a given string character-by-character,
 * followed by new line at the end.
 * @s:The string that will be printed.
 * Return:void
 */
void _puts_recursion(char *s)
{
if (!(*s))
{
	_putchar('\n');
}
else
{
	_putchar(*s);
	_puts_recursion(s + 1);
}

}
