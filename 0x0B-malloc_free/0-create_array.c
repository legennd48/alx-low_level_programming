#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars and initializes it with
 * a specific char
 * @size: size of array to be created.
 * @c: char used for initialization
 * Return: NULL or char array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}

	ar = (char *) malloc(size * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(ar + i) = c;
	}
	return (ar);
}
