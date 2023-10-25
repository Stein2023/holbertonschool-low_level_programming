#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - the function
 * @s: the parameter
 */


void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);

	}


}
