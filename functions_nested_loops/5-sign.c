#include <stdio.h>
#include "main.h"
/**
 * print_sign - this
 *
 * @n: this
 *
 * Return: go
 *
 */
	int print_sign(int n)
	{

	if (n > 0)
	{
	putchar ('+');
	return (1);
	}

	if (n == 0)
	{
	putchar ('0');
	return (0);
	}

	else
	{
	putchar ('-');
	return (-1);
	}

	}
