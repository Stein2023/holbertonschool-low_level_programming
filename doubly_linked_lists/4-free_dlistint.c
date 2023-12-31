#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_dlistint - free list_t
 * @head: head of the linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *original;
	dlistint_t *cont;

	original = head;

	while (original != NULL)
	{
		cont = original->next;
		free(original);
		original = cont;
	}
}

