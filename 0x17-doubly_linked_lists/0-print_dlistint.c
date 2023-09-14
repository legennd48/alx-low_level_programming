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
	const dlistint_t *temp = NULL;

	if (h == NULL)
	{
		printf("\n");
		return (0);
	}
	temp = h;
	if (temp->prev != NULL)
		while (temp->prev != NULL)
			temp = temp->prev;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		nodes++;
		temp = temp->next;
	}
	return (nodes);
}
