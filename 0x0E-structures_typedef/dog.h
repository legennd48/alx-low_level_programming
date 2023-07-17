#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Structure for dog data
 * @name: pet name
 * @age: age in dog years
 * @owner: name of owner in string
 *
 * Description:  made to store data of dogs from all across the petniverse
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* init_dog - initializes a variable of type struct dog
* @d: pointer to data to be initialised
* @name: name of pet
* @age: age of pet
* @owner: name of pet owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
