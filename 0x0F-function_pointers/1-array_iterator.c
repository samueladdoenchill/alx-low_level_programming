#include "function_pointers.h"

/**
 * array_iterator - executes a function given at its parameter
 * on each element of an array
 *
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to function used to perform action on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
/* Declare and initialize loop iterator variable */
unsigned int i = 0;

/* Check if array and function pointer are not NULL */
if (array != NULL && action != NULL)
{

/* Loop through each element in the array */
for (i = 0; i < size; i++)
{

/* Call the function with the current element */
action(array[i]);
}
}
}
