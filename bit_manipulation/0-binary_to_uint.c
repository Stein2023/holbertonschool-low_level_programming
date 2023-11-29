#include <stddef.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - the name of the function
 * @b: the parameter
 *
 *
 * Return: A function that converts a binary number
 */


unsigned int binary_to_uint(const char *b)
{

	unsigned int result;

	result = 0;



	if (b == NULL)
		return (0);



	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{

			return (0);
		}

		result = (result << 1) + (*b - '0');
		b++;
	}

	return (result);
}
