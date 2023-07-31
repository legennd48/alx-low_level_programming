#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_listint - frees a listint_ list
 * @head: pointer to the head node of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);

}
