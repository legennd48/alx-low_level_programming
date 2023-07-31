#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint2 - frees a listint list and sets head to NULL
 * @head: pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
