#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - free list_t
 * @head: head of the linked list
 */

void free_list(list_t *head)
{
	list_t *original;
	list_t *cont;

	original = head;

	while (original != NULL)
	{
		cont = original->next;
		free(original->str);
		free(original);
		original = cont;
	}
}
