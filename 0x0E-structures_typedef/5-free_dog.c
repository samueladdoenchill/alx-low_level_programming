#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to dog to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		d->name = NULL;
		free(d->owner);
		d->owner = NULL;
		free(d);
		d = NULL;
	}
}

