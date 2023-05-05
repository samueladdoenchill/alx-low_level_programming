#include <unistd.h>
#include "main.h"

/**
 * _putchar - it will EiTher write or print xters
 * @character: xter that has been printed
 * Return: 1 on success, or -1 on error
 */

int _putchar(char character)
{
	return (write(1, &character, 1));
}
