#include "dog.h"


/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to data to be initialised
 * @name: name of pet
 * @age: age of pet
 * @owner: name of pet owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
