#include <stdlib.h>
#include "lists.h"

/**
 * free_list - traverses all nodes and frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		/*temp = head;*/
		/*head = head->next;*/
		/*free(temp->str);*/
		/*free(temp);*/
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
