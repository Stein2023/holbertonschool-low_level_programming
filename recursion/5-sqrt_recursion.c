#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - The function
 * @a: the parameter
 * @b: the second paramater
 *
 *
 * Return: The natural square root of a number
 */

int _sqrt_recursion(int a, int b)
{

	if (a == (b * b))
		return (b);
	else if ((b * b) >= a)
		return (-1);
	else
		return (_sqrt_recursion(a, b + 1));
}


