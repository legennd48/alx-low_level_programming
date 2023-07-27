#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds a new node to the beginning of a list_t
 * @head: node head
 * @str: str data for new node
 * Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->str = malloc(strlen(str) + 1);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	strcpy(new->str, str);
	new->len = strlen(str);

	*head = new;

	return (new);
}
