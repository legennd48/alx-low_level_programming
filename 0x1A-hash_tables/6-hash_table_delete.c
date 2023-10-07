#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table and its elements
 * @ht: pointer to the hash_table_t structure
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current_node, *temp_node;
	hash_table_t *temp_ht = ht;

	if (temp_ht == NULL)
		return;

	for (index = 0; index < temp_ht->size; index++)
	{
		if (temp_ht->array[index] != NULL)
		{
			current_node = temp_ht->array[index];
			while (current_node != NULL)
			{
				temp_node = current_node->next;
				free(current_node->key);
				free(current_node->value);
				free(current_node);
				current_node = temp_node;
			}
			temp_ht->array[index] = NULL;
		}
	}

	free(temp_ht->array);
	free(temp_ht);
}
