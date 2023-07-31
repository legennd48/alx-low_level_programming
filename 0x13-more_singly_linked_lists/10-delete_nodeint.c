#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the listint_t
 * node at at the secified index
 * @head: pointer to the head node of the list
 * @index: index of node to be deleted
 * Return: 1 if it succeeded and -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int control = 0;
	listint_t *temp, *temp2;

	temp = *head;

	if (index == 0)
	{
		if (*head != NULL)
		{
			*head = (*head)->next;
			free(temp);
			return (1);
		}
		return (-1);
	}

	while (control < (index - 1) && temp->next != NULL)
	{
		control++;
		temp = temp->next;
	}

	if (control == (index - 1) && temp->next != NULL)
	{
		temp2 = temp->next;
		temp->next = temp2->next;
		free(temp2);
		return (1);
	}

	return (-1);
}
