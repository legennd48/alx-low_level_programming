#include <lists.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - adds a new node to the beginning of a list_t
 * @head: node head
 * @str: str data for new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp, *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->str = malloc(sizeof(list_t.str));
	if (new->str == NULL)
		return (NULL);
	new->str = *str;
	*head = &new;

	return (new);
}
