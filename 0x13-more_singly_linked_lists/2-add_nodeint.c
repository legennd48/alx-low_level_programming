#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a node to the beginning of a listint_t list
 * @head: pointer to the head node of the list.
 * @n: value of .n member of the new node.
 * Return: pointer to new node or NULL upon failure
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->next = *head;
	new->n = n;
	*head = new;

	return (new);
}
