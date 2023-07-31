#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to headnode of the listint_t list
 * Return: number of nodes int the list.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
