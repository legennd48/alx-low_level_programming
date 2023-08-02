#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list with a loop
 * @h: pointer to the head node of the list
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	unsigned int nodes = 0;
	listint_t *current_node = NULL, *temp = NULL;

	if (h == NULL || *h == NULL)
		return (0);

	current_node = *h;

	while (current_node->next != NULL)
	{
		nodes++;
		temp = current_node;
		current_node = current_node->next;

		/* Set the next pointer of the current node to NULL */
		temp->next = NULL;

		/* Free the current node */
		free(temp);

		/* Break the loop if a loop is detected */
		if (current_node == *h)
			break;
	}
	nodes++;
	*h = NULL;

	return (nodes);
}
