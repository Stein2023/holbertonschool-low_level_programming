#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * dlistint_len - the name of the function
 * @h: the pointer that takes in the elements
 *
 *
 * Return: the number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{

size_t counter;

for (counter = 0; h; counter++)
{
	h = h->next;
}
	return (counter);
}

