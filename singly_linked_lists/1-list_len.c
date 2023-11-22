#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - the name of the function
 * @h: the first parameter
 *
 *
 * Return: a function that returns the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{

	int amount = 0;

	while (h != 0)
	{
	amount++;
	h = h->next;
	}
	return (amount);


}
