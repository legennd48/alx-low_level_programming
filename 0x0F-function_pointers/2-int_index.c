#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches an array for an integer that matches.
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to searching function
 */

int int_index(int *array, int size,  int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i <= size; i++)
	{
		if (i == size)
			return (-1);
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
