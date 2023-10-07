#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - print key-value pairs of the hash table in order
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *node;
	char *separator = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	while (index < ht->size)
	{
		node = ht->array[index];
		while (node)
		{
			printf("%s'%s': '%s'", separator, node->key, node->value);
			separator = ", ";
			node = node->next;
		}
		index++;
	}
	putchar('}');
	putchar('\n');
}
