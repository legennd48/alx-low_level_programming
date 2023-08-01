#include "lists.h"
#include <stddef.h>

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head node of the list.
 * Return: The pointer to the node where the loop starts, or NULL if none
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *normal, *control;

	if (head == NULL || head->next == NULL)
		return (NULL);

	normal = head;
	control = head;

	/* Move normal one step and control two steps */
	while (control != NULL && control->next != NULL)
	{
		normal = normal->next;
		control = control->next->next;

		if (normal == control)
			break;
	}

	/* If control is NULL or control->next is NULL, there is no loop */
	if (control == NULL || control->next == NULL)
		return (NULL);

	/* Reset normal to the head and move both normal and control one step*/
	/* at a time until they meet again */
	normal = head;
	while (normal != control)
	{
		normal = normal->next;
		control = control->next;
	}

	return (normal);
}
