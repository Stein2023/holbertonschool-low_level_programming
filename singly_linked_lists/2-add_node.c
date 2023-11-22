#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - the name of the function
 * @head: where the first node is located
 * @str: the string
 *
 * Return: a function that adds a new node at the beginning of a list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node1;
	int a;

	node1 = malloc(sizeof(list_t));

	if (node1 == NULL)
	{
		return (NULL);
	}

	node1->str = strdup(str);

	if (node1->str == NULL)
	{
		free(node1);
		return (NULL);
	}

	for (a = 0; str[a] != '\0'; a++)
	{

	}

	node1->len = a;
	node1->next = *head;

	*head = node1;
	return (node1);
}
