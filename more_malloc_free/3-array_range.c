#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"


/**
 * array_range - the function
 * @min: the minimum value
 * @max: the maximum value
 *
 *
 * Return: a function that creates an array of integers
 */

int *array_range(int min, int max)
{

int *ptr;
int arr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	arr = 0;
	while (min <= max)
	{
		ptr[arr] = min;
		min++;
		arr++;
	}
	return (ptr);

}
