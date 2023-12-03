#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"



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
