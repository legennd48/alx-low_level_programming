#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @head: pointer to head node
 * @idx: index where new node is to be inserted
 * @n: integer value of new node
 * Return: pointer to new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *temp = NULL;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *h;
	while (*h != NULL && i <= idx)
	{
		i++;
		*h = (*h)->next;
		if (i == idx - 1)
		{
			new->next = (*h)->next;
			new->prev = (*h);
			(*h)->next = new;
			*h = temp;
			return (new);
		}
	}
	return (NULL);
}
