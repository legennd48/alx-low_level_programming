#include "dog.h"
#include <stdlib.h>


/**
*lent - returns the length of a string
*@s: string to be checked
*Return: length of string
*/

int lent(char *s)
{
	int lent = 0;

	while (*s != '\0')
	{
		s++;
		lent++;
	}
	return (lent);
}


/**
 *copy - opies the string pointed to by src, including the terminating
 *null byte (\0), to the buffer pointed to by dest.
 *@dest: where string will be copied to
 *@src: where we are copying from
 *Return: dest
 */

char *copy(char *dest, char *src)
{
	int i, n;

	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}

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
	int name_lent = lent(name);
	int owner_lent = lent(owner);

	dog_data = malloc(sizeof(dog_t));
	if (dog_data == NULL)
		return (NULL);

	dog_data->name = malloc(name_lent * sizeof(char));
	if (dog_data->name == NULL)
	{
		free(dog_data);
		return (NULL);
	}
	dog_data->owner = malloc(owner_lent * sizeof(char));
	if (dog_data->owner == NULL)
	{
		free(dog_data);
		free(dog_data->name);
		return (NULL);
	}

	copy(dog_data->owner, dog_data->owner);
	copy(dog_data->name, dog_data->name);
	dog_data->age = age;

	return (dog_data);
}
