#include "lists.h"
#include <stddef.h>

/**
 * listint_len - finds an dreturns the number of elements in a listint list
 * @h: pointer to head node of list
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);

}
