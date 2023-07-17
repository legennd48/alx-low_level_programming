#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - saves a copy of the newdog data
 * @name: name of newdog
 * @owner: name of owner
 * @age: age of newdog
 * Return: pointer to dog data
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_data;

	dog_data = malloc(sizeof(dog_t));
	if (dog_data == NULL)
		return (NULL);

	dog_data->name = name;
	dog_data->age = age;
	dog_data->owner = owner;

	return (dog_data);
}
