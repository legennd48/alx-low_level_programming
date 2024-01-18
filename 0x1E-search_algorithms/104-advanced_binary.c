#include "search_algos.h"

/**
 * binary_search_recursive - Searches for the first occurrence of
 * a value in a sorted array using binary search
 * @array: Pointer to the first element of the array
 * @left: Index of the leftmost element
 * @right: Index of the rightmost element
 * @value: Value to search for
 * Return: Index of the first occurrence of the value if found, otherwise -1
 */

int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid, result, i;

	if (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		if (array[mid] == value)
		{
			result = binary_search_recursive(array, left, mid - 1, value);
			return (result == (size_t)-1 ? mid : result);
		}
		else if (array[mid] > value)
			return binary_search_recursive(array, left, mid - 1, value);
		else
			return binary_search_recursive(array, mid + 1, right, value);
	}

	return -1;
}

/**
 * advanced_binary - Calls the recursive binary search function
 * @array: array to search through
 * @size: size of the array
 * @value: Value to search for
 * Return: Index of the first occurrence of the value if found, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return -1;

	return binary_search_recursive(array, 0, size - 1, value);
}
