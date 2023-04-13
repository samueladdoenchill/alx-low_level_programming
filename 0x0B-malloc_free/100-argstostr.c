#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - creates an array of chars, and initializes
  * it with a specific char.
  * @size: size of the array to be initialized.
  * @c: character to initialize the array with.
  *
  * Return: pointer to the array, or NULL if it fails.
  */
char *create_array(unsigned int size, char c)
{
  char *ptr = malloc(sizeof(char) * size);
  unsigned int i;

  if (size == 0 || ptr == NULL)
    return (NULL);

  for (i = 0; i < size; i++)
    *(ptr + i) = c;

  return (ptr);
}

