#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t list with a loop,
 *                      going through the list only once.
 * @head: Pointer to the head node of the list.
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current_node = NULL;
	const listint_t *loop_node = NULL;
	size_t node_count = 0;
	size_t loop_index;

	current_node = head;
	while (current_node)
	{
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		node_count++;
		current_node = current_node->next;
		loop_node = head;
		loop_index = 0;
		while (loop_index < node_count)
		{
			if (current_node == loop_node)
			{
				printf("-> [%p] %d\n", (void *)current_node, current_node->n);
				return (node_count);
			}
			loop_node = loop_node->next;
			loop_index++;
		}
		if (!head)
			exit(98);
	}
	return (node_count);
}
