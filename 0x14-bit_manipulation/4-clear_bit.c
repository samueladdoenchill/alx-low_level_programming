#include "main.h"

/**
 * clear_bit - Sets the value of a given bit to 0.
 *
 * @num_ptr: Pointer to the number to change.
 * @index: Index of the bit to clear.
 *
 * Return: 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *num_ptr, unsigned int index)
{
    if (index > 63) /* Check if index is within range */
        return (-1);

    /* Clear the bit at the specified index by performing bitwise operations */
    *num_ptr = (~(1UL << index) & *num_ptr);

    return (1); /* Return 1 to indicate success */
}

