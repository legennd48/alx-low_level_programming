#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head node
 * @index: index to be gotten
 * Return: pointer to index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *target = NULL;
	unsigned int i = 0;

	if (index == 0)
		return (head);
	if (head == NULL)
		return (NULL);
	while (i <= index)
	{
		head = head->next;
		i++;
		if (i == index)
		{
			target = head;
			return (target);
		}
	}
	return (NULL);
}
