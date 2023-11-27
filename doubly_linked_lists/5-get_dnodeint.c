#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - the name of the function
 * @head: the start of the list
 * @index: the counter of the list starting  from 0
 *
 *
 * Return: returns the nth value
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *original = head;

	unsigned int count;

	count = 0;


	while (original != NULL)
	{
		if (count == index)
			return (original);

		count++;
		original = original->next;
	}

	return (NULL);

}
