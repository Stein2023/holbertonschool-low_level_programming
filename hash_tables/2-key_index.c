#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"


/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
	hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}

/**
 * key_index - the name of the function
 * @key: the key
 * @size: the size
 *
 *
 *
 * Return: a function that give the index of a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int hv;

	hv = hash_djb2(key);


	return (hv % size);


}
