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
	return (1);
	putchar ('+');
	}

	if (n == 0)
	{
	return (0);
	putchar (0);
	}

	if (n < 0)
	{
	return (-1);
	putchar (-1);

	}
