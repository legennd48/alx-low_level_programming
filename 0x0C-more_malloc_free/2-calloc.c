#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, and initializes all elements to 0
 * @nmemb: number of elements
 * @size: sixe of eash element
 * Return: Null on falure and pointer to new array on success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *call;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	call = (char *) malloc(nmemb * size);
	if (call == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		call[i] = 0;
	}

	return (call);
}
