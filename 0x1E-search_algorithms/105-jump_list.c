#include "search_algos.h"

/**
 * jump_list - searches for a value in a singly linked list
 * using the Jump search algorithm
 * @list: head of list list
 * @size: size of linked list
 * @value: key to search for
 * Return: node containing the value, or NULL if not found
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, jump_size, block_size;
	listint_t *previous;

	if (list == NULL || size == 0)
		return (NULL);

	block_size = (size_t)sqrt((double)size);
	step = 0;
	jump_size = 0;
	previous = list;

	do {
		previous = list;
		jump_size++;
		step = jump_size * block_size;

		while (list->next && list->index < step)
			list = list->next;

		if (list->next == NULL && step != list->index)
			step = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)step, list->n);

	} while (step < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)previous->index, (int)list->index);

	for (; previous && previous->index <= list->index; previous = previous->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)previous->index, previous->n);
		if (previous->n == value)
			return (previous);
	}

	return (NULL);
}
