#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - the function
 * @s: the parameter
 *
 *
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);

	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}

}
