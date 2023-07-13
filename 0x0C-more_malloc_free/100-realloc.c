#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory set for extension/reduction
 * @old_size: size of pointer to be reallocated
 * @new_size: size of new mem 
 * Return: NULL ot pointer to newly allocated mem
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new, *old = ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	new = malloc(new_size);

	if (new == NULL)
		return (NULL);

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new[i] = old[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new[i] = old[i];
	}

	free(old);

	return (new);
}
