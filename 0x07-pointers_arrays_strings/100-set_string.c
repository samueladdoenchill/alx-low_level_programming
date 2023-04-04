#include "main.h"
/**
 * set_string - Sets a pointer to a new string.
 * @s: pointer to be changed
 * @to: String to which the pointer should be changed.
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;

