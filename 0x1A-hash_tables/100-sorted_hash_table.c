#include "hash_tables.h"

/**
 * create_shash_node - creates a new sorted hash table node
 * @key: key
 * @value: value
 * Return: pointer to the new node, or NULL on failure
 */

shash_node_t *create_shash_node(const char *key, const char *value)
{
	shash_node_t *new_node = malloc(sizeof(shash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->sprev = NULL;
	new_node->snext = NULL;

	return (new_node);
}

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array
 * Return: pointer to the new hash table, or NULL on failure
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));
	unsigned long int i;

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; ++i)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: pointer to the sorted hash table
 * @key: key
 * @value: value
 * Return: 1 on success, 0 on failure
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *node;
	shash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
				return (0);
			return (1);
		}
		node = node->next;
	}

	new_node = create_shash_node(key, value);
	if (new_node == NULL)
		return (0);

	if (ht->shead == NULL || strcmp(ht->shead->key, key) > 0)
	{
		new_node->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = new_node;
		ht->shead = new_node;
		if (ht->stail == NULL)
			ht->stail = new_node;
	}
	else
	{
		node = ht->shead;
		while (node->snext != NULL && strcmp(node->snext->key, key) < 0)
			node = node->snext;

		new_node->snext = node->snext;
		if (node->snext != NULL)
			node->snext->sprev = new_node;
		node->snext = new_node;
		new_node->sprev = node;

		if (new_node->snext == NULL)
			ht->stail = new_node;
	}

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}

/**
 * shash_table_get - retrieves the value associated with a key
 * @ht: pointer to the sorted hash table
 * @key: key
 * Return: value associated with the key, or NULL if key not found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: pointer to the sorted hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	putchar('{');
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->snext != NULL)
			printf(", ");
		node = node->snext;
	}
        putchar('}');
	putchar('\n');
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: pointer to the sorted hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	putchar('{');
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->sprev != NULL)
			printf(", ");
		node = node->sprev;
	}
	putchar('}');
	putchar('\n');
}

/**
 * shash_table_delete - deletes a sorted hash table and its elements
 * @ht: pointer to the sorted hash table
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node != NULL)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}

	free(ht->array);
	free(ht);
}
