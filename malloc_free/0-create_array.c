#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - the function
 * @size: a parameter
 * @c: the second parameter
 *
 *
 * Return: An array of chars and initalizes it with a specific char
 */


char *create_array(unsigned int size, char c)
{

	if (size = 0)
	{
		return ('\0');
	}

	char *array = (char *)malloc(size * sizeof(char));

	if (array = '\0')
	{
		return ('\0');
	}

	for (unsigned int i = 0; i < size; ++i)
	{
		array[i] = c;
	}

	return (array);


}
