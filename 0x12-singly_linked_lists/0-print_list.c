#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * print_list - prints all the elements of a list_t list
 * @h: head ptr to the first node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nul)\n");
		else
		{
			printf("[%zu] %s\n", h->len, h->str);
		}
		nodes++;
		h = h->next;
	}

	return (nodes);
}
