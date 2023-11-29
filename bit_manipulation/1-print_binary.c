#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"


/**
 * print_binary - the name of the function
 * @n: the parameter
 *
 *
 * Return: A function that represents the binary representation of a number
 */


void print_binary(unsigned long int n)
{
	if (n > 1)
	{
	print_binary(n >> 1);
	}
	putchar((n & 1) + '0');
}
