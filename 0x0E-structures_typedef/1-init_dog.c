#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: A pointer to the struct dog to initialize.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner of the dog
 *
 * Description: Contains information about a dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
d->name = name;
d->age = age;
d->owner = owner;
}
