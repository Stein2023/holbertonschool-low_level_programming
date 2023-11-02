#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * malloc_checked - the function name
 * @b: the first parameter type integer
 *
 *
 * Return: allocates memory using malloc
 */


void *malloc_checked(unsigned int b)
{

void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "memory allocation failed");
		exit(98);
	}

	return (ptr);


}
