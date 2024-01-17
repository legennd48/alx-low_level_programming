#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using jump search
 * @array: Pointer to the array
 * @size: Size of the array
 * @value: Value to search for
 * Return: Index of the value if found, otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t current, block_size, last_checked;

	if (!array || size == 0)
		return (-1);

	block_size = sqrt(size);
	current = 0;

	/* Jump to the block where the value might be present */
	while (current < size && array[current] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", current, array[current]);
		last_checked = current;
		current += block_size;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       last_checked, current);

	/* Linear search within the identified block */
	while (last_checked < size && last_checked <= current)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       last_checked, array[last_checked]);

		if (array[last_checked] == value)
			return (last_checked);

		last_checked++;
	}

	return (-1);
}
