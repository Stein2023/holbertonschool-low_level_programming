#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at the given position.
 * @head: double pointer to list.
 * @index: index of inserting position.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *prev_node = *head, *current_node = *head;

	if (index == 0 && *head != NULL)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(current_node);
		}
		else
			*head = NULL;
		return (1);
	}

	while (i < index && current_node)
	{
		prev_node = current_node;
		current_node = current_node->next;
		i++;
	}

	if (current_node)
	{
		prev_node->next = current_node->next;

		if (current_node->next)
			current_node->next->prev = prev_node;

		free(current_node);
		return (1);
	}

	return (-1);
}

