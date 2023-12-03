#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the table
 *
 * Return: A pointer to the newly created hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *ht;

if (size == 0)
	return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
if (ht->array == NULL)
	{
	free(ht);
	return (NULL);
}
	for (i = 0; i < size; i++)
	{
	ht->array[i] = NULL;
	}

	return (ht);
}

