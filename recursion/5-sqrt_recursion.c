#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion
 * @n: the parameter
 * @root: second parameter
 *
 *
 * Return: The natural square root of a number
 */

int _sqrt_recursion(int n, int root)
{

	if (root * root == n)
	{
		return (root);
	}

	else if (root * root > n)
	{
		return (-1);

	}

	else
	{
		return (_sqrt_recursion(n, root + 1));
	}


}
