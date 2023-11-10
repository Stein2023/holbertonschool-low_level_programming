#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - the name of the function
 * @n: the parameter
 *
 *
 *
 * Return: the sum of all its parameters
 */


int sum_them_all(const unsigned int n, ...)
{

va_list list;

va_start(list, n);

unsigned int i;
int sum;
sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

va_end(list);

return (sum);

}
