#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - the function name
 * @array: the array
 * @size: the size of the array
 * @cmp: is used to compare values
 *
 *
 * Return: A search for an integer
 */


int int_index(int *array, int size, int (*cmp)(int))
{

int i;

if (array == NULL || cmp == NULL || size <= 0)
{
	return (-1);

}

for (i = 0; i < size; i++)
{
	if (cmp(array[i]) == 0)
	{
		return (i);
	}

}

	return (-1);
}

