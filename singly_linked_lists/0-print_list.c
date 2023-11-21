#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list
 *
 * Return: Number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
		printf("[%u] %s\n", h->len, "(nil)");
	else
	printf("[%u] %s\n", h->len, h->str);

	h = h->next;
	i++;
	}

	return (i);
}

