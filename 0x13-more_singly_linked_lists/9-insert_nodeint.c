#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at specified intex
 * of a listint_t list
 * @idx: index of the list where node is to be inserted
 * @n: new data for new node
 * @head: pointer to the head node of the list
 * Return: pointer to new node or NULL upon falure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int control = 0;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp;

	if ((head == NULL || new == NULL || *head == NULL) && idx != 0)
		return (NULL);

	new->n = n;
	temp = *head;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (control != idx - 1 && temp != NULL)
	{
		control++;
		temp = temp->next;
	}
	if (control == idx - 1)
	{
		new->next = temp->next;
		temp->next = new;
	}
	else
		return (NULL);
	return (new);
}
