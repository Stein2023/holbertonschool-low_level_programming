#include <stdio.h>
#include "main.h"


/**
 * set_bit - the name of the function
 * @n: the parameter
 * @index: the index
 *
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}

	*n |= (1UL << index);
	return (1);
}
