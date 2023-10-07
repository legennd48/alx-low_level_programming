#include "hash_tables.h"

/**
 * key_index -  function that gives you the index of a key.
 * @key: pointer to key of the wanted index
 * @size: size of table
 * Return: Index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
