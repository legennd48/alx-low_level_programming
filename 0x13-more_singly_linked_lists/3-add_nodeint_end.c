#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node to the end of a listint_t list
 * @n: new data for the new node
 * @head: pointer to the head node of the list
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = NULL;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}
	return (new);
}
