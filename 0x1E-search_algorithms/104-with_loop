#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array
 * @size: size of the array
 * @value: Value to search for
 * Return: -1 on fail, index of key on success
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, result, mid;

	if (!array || size == 0)
		return (-1);

	while (left <= right)
	{
		size_t i;

		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			result = mid;
			right = mid - 1;
		}
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (result == size ? -1 : (int)result);
}
