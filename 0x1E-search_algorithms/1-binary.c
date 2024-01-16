#include "search_algos.h"

/**
 * binary_search - Search through an array for the inddex of the elemnt
 * that matches a set value using Binary Search algorithm
 * @array: Array to be searched
 * @size: size of the array
 * @value: Value of target element
 * Return: -1 on failure and the target index on success
 */

int binary_search(int *array, size_t size, int value)
{
	int i, right, left;

	if (size == 0 || array == NULL)
	{
		return (-1);
	}

	for (left = 0, right = (int)size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;

		if (array[i] > value)
			right = i - 1;
		else if (array[i] < value)
			left = i + 1;
		else
			return (i);
	}
	return (-1);
}
