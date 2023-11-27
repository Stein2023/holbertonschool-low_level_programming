#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - the name of the function
 * @head: where the first node is located
 * @n: the variable
 *
 * Return: a function that adds a new node at the beginning of a list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node1;

	node1 = malloc(sizeof(dlistint_t));

	if (node1 == NULL)
	{
		return (NULL);
	}

	node1->n = n;

	node1->next = *head;
	node1->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = node1;
	}

	*head = node1;

	return (node1);
}
