#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - the name of the function
 * @h: the pointer
 *
 *
 * Return: a function that prints all the elements of a dlistint_t
 */


size_t print_dlistint(const dlistint_t *h)
{
	
const dlistint_t *current = h;
size_t nodeCount = 0;

	while (current != NULL)
	{
	printf("%d",current->n);

	if (current->next != NULL)
	{
	printf( " -> ");
	}

	else
	{
	printf ( "\n");
	}

	current = current->next;
	nodeCount++;
	}

	return (nodeCount);
	}



