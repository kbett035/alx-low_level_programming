#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -This does initialize a variable of type structure dog
 * @d: pointer to struct dog to be initialized
 * @name: The name to initialize
 * @age: The age to be initialized
 * @owner: The owner to initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
