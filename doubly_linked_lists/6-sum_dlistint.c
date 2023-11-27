#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * sum_dlistint - the name of the function
 * @head: the start of the list
 *
 *
 * Return: the sum of all the data
 */


int sum_dlistint(dlistint_t *head)
{

int sum;
dlisint_t *present;

sum = 0;
present	= head;

while (present != NULL)
{
	sum += present->n;
	present = present->next;
}

return (sum);

}
