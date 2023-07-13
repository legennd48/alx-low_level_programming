#include "main.h"
#include <stdlib.h>

/**
 * array_range - makes an array all integers within a certain range
 * @min: minimum int value
 * @max: maximum int value
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int size, i, next, *intarr;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	intarr = malloc(size * sizeof(int));

	if (intarr == NULL)
	{
		return (NULL);
	}

	next = min;

	for (i = 0; i < size; i++)
	{
		intarr[i] = next;
		next++;
	}

	return (intarr);

}
