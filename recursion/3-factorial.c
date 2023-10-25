#include <stdio.h>
#include "main.h"

/**
 * factorial - the function
 * @n: the parameter
 *
 *
 * Return: the factorial of a given number
 */

int factorial(int n)
{

	if (n == 0)
	{
	return (1);
	}

	else
	{
	return (n * factorial(n - 1));

	}
	else if	(n < 0)
		return (-1);
}
