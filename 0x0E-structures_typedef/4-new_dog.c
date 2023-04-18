#include <stdlib.h>
#include <string.h>
#include "dog.h"


/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner of the dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int i, nl, ol;
dog_t *dog;

if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
nl = strlen(name) + 1;
dog->name = malloc(nl *sizeof(char));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; i < nl; i++)
dog->name[i] = name[i];
dog->age = age;
ol = strlen(owner) + 1;
dog->owner = malloc(ol *sizeof(char));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (i = 0; i < ol; i++)
dog->owner[i] = owner[i];
return (dog);
}

