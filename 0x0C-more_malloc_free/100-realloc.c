#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block, or NULL if failed
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
/* declare pointers for old and new memory blocks */
char *old_block, *new_block;
unsigned int i;

/* if new size is the same as old size, just return the original pointer */
if (new_size == old_size)
{
return (ptr);
}

/* if new size is 0 and pointer is not NULL, free memory and return NULL */
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

/* if pointer is NULL, allocate new memory and return new pointer */
if (ptr == NULL)
{
new_block = malloc(new_size);
return (new_block);
}

/* allocate memory for the new block */
new_block = malloc(new_size);
if (new_block == NULL)
{
return (NULL);
}

/* cast pointers to char pointers for byte-by-byte copying */
old_block = ptr;

/* copy old block to new block, up to minimum of old and new sizes */
for (i = 0; i < old_size && i < new_size; i++)
{
new_block[i] = old_block[i];
}

/* free the old memory block */
free(ptr);

/* return the new memory block */
return (new_block);
}
