#include "hash_tables.h"
/**
 * hash_table_create - create a hash table of a given size
 * @size: size of the hash table
 * Return: pointer to the created hash table; NULL if error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **new_array;
	unsigned long int index = 0;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_array = malloc(sizeof(*new_array) * size);
	if (new_array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	while (index < size)
	{
		new_array[index] = NULL;
		index++;
	}
	new_table->size = size;
	new_table->array = new_array;

	return (new_table);
}
