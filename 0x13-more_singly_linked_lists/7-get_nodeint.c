#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - finds and returns the nth node of a list_t
 * linked list
 * @head: pointer to head node of the list
 * @index: is the index of the node we are looking for, starting from 0
 * Return: pointer to nth node or NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int control = 0;

	while (control != index && head != NULL)
	{
		head = head->next;
		control++;
	}

	if (control == index)
		return (head);
	else
		return (NULL);
}
