#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * and initializes it with a char
 * @size: the size of the array to create
 * @c: the character to initialize the array with
 *
 * Return: On success, returns a pointer to the created array.
 * On failure, returns NULL.
 */


char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;

    if (size == 0)
        return NULL;

    array = malloc(size * sizeof(char));

    if (!array)
        return NULL;

    for (i = 0; i < size; i++)
        array[i] = c;

    return array;
}

