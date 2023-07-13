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
	int n = 0, i, next, *intarr;

	if (min > max)
	{
		return (NULL);
	}

	while (min <= max)
	{
		n++;
	}

	intarr = malloc(n * sizeof(int));

	if (intarr == NULL)
	{
		return (NULL);
	}

	next = min;

	for (i = 0; i < n; i++)
	{
		intarr[i] = next;
		next++;
	}

	return (intarr);

}
