#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer to the newly allocated memory block, or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr, *old_ptr;
unsigned int i, min_size;

/* If ptr is NULL, equivalent to malloc(new_size) */
if (ptr == NULL)
{
new_ptr = malloc(new_size);
return (new_ptr);
}
/* If new_size is 0 and ptr is not NULL, equivalent to free(ptr) */
else if (new_size == 0)
{
free(ptr);
return (NULL);
}

/* If new_size and old_size are the same, do nothing and return ptr */
else if (new_size == old_size)
{
return (ptr);
}

/* Allocate new memory block and copy contents of old block to new block */
else
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

old_ptr = ptr;
min_size = old_size < new_size ? old_size : new_size;
for (i = 0; i < min_size; i++)
new_ptr[i] = old_ptr[i];

/* Free old memory block and return pointer to new block */
free(ptr);
return (new_ptr);
}
}
