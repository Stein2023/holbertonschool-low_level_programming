#include <stdio.h>
#include "main.h"

/**
 * get_bit - the name of the function
 * @n: a parameter
 * @index: the index
 *
 *
 * Return: The value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}

	mask = 1UL << index;
	return ((n & mask) >> index);

}
