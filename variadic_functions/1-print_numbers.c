#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_numbers - this is the name of the function
 * @separator: this is the first parameter
 * @n: this is the second parameter
 *
 *
 *
 * Return: A function that prints numbers
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list list;

	unsigned int i;
	int num;

	va_start(list, n);


	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);

		if (separator != NULL && i != n - 1)
		{
			printf("%d%s", num, seperator);
		}
		else
		{
			printf("%d", num);
		}
	}

	va_end(list);

	printf("\n");



	}
