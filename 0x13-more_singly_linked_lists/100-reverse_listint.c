#include "lists.h"
#include <stddef.h>

/**
 * reverse_listint - reverses a listint_t list and returens
 * the pointer to the first node of the reversed list.
 * @head: pointer to the head node of the list to be reversed
 * Return: pointer to the head of the reversed list. or NULL.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp2;

	if (head == NULL || *head == NULL)
		return (NULL);

	temp = *head;
	*head = (*head)->next;
	temp->next = NULL;

	while (*head != NULL)
	{
		temp2 = *head;
		*head = (*head)->next;
		temp2->next = temp;
		temp = temp2;
	}

	*head = temp;

	return (temp);
}
