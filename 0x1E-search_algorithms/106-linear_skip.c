#include "search_algos.h"

/**
 * linear_skip - searches for a key value in a sorted skip list
 * @list:  list to search
 * @value: key-value to look for
 * Return: node containing the value, or NULL if not found
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current_node, *jump_node;

	if (list == NULL)
		return (NULL);

	for (current_node = jump_node = list; jump_node->next &&
		     jump_node->n < value;)
	{
		current_node = jump_node;
		if (jump_node->express)
		{
			jump_node = jump_node->express;
			printf("Value checked at index [%ld] = [%d]\n",
			       jump_node->index, jump_node->n);
		}
		else
		{
			while (jump_node->next)
				jump_node = jump_node->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
	       current_node->index, jump_node->index);

	for (; current_node->index < jump_node->index && current_node->n < value;
	     current_node = current_node->next)
		printf("Value checked at index [%ld] = [%d]\n",
		       current_node->index, current_node->n);
	printf("Value checked at index [%ld] = [%d]\n",
	       current_node->index, current_node->n);

	return (current_node->n == value ? current_node : NULL);
}
