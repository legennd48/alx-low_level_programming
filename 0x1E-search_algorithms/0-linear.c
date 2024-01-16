#include "search_algos.h"

/**
 * linear_search - Searches an array to return the index
 * of element that matches a set value using Linear search
 * @array: pointer to the first element of the array
 * @size: Size of the array to be searched
 * @value: Value to Search for
 * Return: -1 of faliure and target's index on success
 */

int linear_search(int *array, size_t size, int value)
{
	int index;

	if (size == 0 || array == NULL)
		return (-1);
	for (index = 0; index < (int)size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
