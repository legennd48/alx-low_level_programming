#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint list
 * and returns the head node's data(n).
 * @head: pointer to the head node
 * Return: Head node's data or 0 if list id empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int m = 0;

	if (*head == NULL)
		return (0);

	m = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (m);
}
