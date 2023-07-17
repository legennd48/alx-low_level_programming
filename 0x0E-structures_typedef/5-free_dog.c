#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory aloocated to dog struct files
 * @d: pointer to structur date
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
