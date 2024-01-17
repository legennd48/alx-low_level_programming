#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: array to search through
 * @size: size of the array
 * @value: key we rare searching for
 * Return: -1 on fail, index of key on Success
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t begin, end, index;

	if (!array || size == 0)
		return (-1);
	end = 1;
	begin = 1;
	for (end = 1, begin = 1; end < size; begin = end, end *= 2)
	{
		if (value < array[end])
			break;
		printf("Value checked arr[%lu] = [%d]\n", end, array[end]);
	}

	index = end < size - 1 ? end : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", begin, index);
	return (bin_search(array, value, end / 2, index));
}


/**
 * bin_search - Searches for a key-value in an array of integers
 * using recursive binary search
 * @array: Array to search
 * @value: key Value we are searching for
 * @lo: Index of low bound
 * @hi: Index of the high bound
 * Return: -1 on fail, Index of the found value on Success
 */
int bin_search(int *array, int value, size_t lo, size_t hi)
{
	size_t mid;

	printArray(array, lo, hi);
	if (hi == lo && array[lo] != value)
		return (-1);

	mid = ((hi - lo) / 2) + lo;
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (bin_search(array, value, lo, mid - 1));
	if (array[mid] < value)
		return (bin_search(array, value, mid + 1, hi));
	return (-1);
}


/**
 * printArray - Prints an array segment
 * @arr: Array to print
 * @start: Start index of the array segment
 * @end: End index of the array segment
 */

void printArray(int *arr, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", arr[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}
