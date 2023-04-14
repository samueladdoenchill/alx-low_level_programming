#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers from
 * min to max (inclusive)
 * @min: minimum value in the range
 * @max: maximum value in the range
 *
 * Return: pointer to the new array, or NULL if memory allocation
 * fails or min > max
 */

int *array_range(int min, int max)
{
int *array_ptr;
int i, num_elements;

if (min > max)
{
return (NULL);
}

num_elements = max - min + 1;

/* Allocate memory for the array of integers */
array_ptr = malloc(num_elements *sizeof(int));

if (array_ptr == NULL)
{
return (NULL);
}

/* Fill the array with values from min to max */
for (i = 0; i < num_elements; i++)
{
array_ptr[i] = min + i;
}

return (array_ptr);
}
