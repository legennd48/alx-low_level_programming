#include "search_algos.h"

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
	size_t i;

	if (right < left)
		return (-1);
	printf("Searching in array: ");

	i = left;
	while (i < right)
	{
		printf("%d, ", array[i]);
		++i;
	}
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value)
		return (i);
	if (array[i] > value)
		return (binary_search_recursive(array, left, i - 1, value));
	return (binary_search_recursive(array, i + 1, right, value));
}
