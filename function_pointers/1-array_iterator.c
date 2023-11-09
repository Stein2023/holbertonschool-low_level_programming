#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - this is the name of the function
 * @array: the parameter for the array
 * @size: the size
 * @action: another parameter
 *
 *
 * Return: A function that executes a function on each element of an array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

unsigned int i;

if (array == NULL || action == NULL)
{
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}


}
