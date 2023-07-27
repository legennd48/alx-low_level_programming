#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * list_len - returns tge number of elements of a list_t list
 * @h: head ptr to the first node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
