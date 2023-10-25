#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - the function
 * @x: a parameter
 * @y: the seccond parameter
 *
 *
 * Return: te value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}


}
