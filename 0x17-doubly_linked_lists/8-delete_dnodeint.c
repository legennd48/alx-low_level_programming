#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of
 * a dlistint_t linked list.
 * @head: pointer to pointer to head node
 * @index: index where the node is to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *target = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	target = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(target);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	while ((index != 0) && (target->next != NULL))
	{
		index -= 1;
		target = target->next;
	}

	if (index == 0)
	{
		target->prev->next = target->next;
		if (target->next != NULL)
			target->next->prev = target->prev;
		free(target);
		return (1);
	}

	return (-1);
}
