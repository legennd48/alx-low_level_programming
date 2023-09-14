#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head node of list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0, i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	nodes = i;

	return (nodes);
}
