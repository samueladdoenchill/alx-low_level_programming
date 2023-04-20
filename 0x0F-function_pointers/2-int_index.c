#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using
 * a comparison function
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @cmp: pointer to the function to use to compare values
 * Return: index of the first element for which the cmp function
 * does not return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
/* Check if array and pointer to function are not NULL */
if (array && cmp)
{
/* Loop through the array and check for a match */
int i;
for (i = 0; i < size; i++)
{
/* If a match is found, return the index */
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
/* No match found or array/pointer to function is NULL */
return (-1);
}
