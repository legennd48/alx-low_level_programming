#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_dlistint - prints sll elements of a dlinstint_t
 * @h: pointer to head node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
