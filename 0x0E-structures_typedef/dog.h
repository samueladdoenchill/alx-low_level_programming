#ifndef DOG
#define DOG

#include <stdio.h>

/**
 * struct dog - a structure representing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner of the dog
 *
 * Description: Contains information about a dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

