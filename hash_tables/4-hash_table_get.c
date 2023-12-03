#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"


/**
 * hash_table_get - the name of the function
 * @ht: the hash table
 * @key: the key
 *
 *
 * Return: a function that retrieves a value associated with a key
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{

	hash_node_t *node_new;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node_new = ht->array[index];
	while (node_new && strcmp(node_new->key, key) != 0)
		node_new = node_new->next;

	return ((node_new == NULL) ? NULL : node_new->value);
}
