#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - the name of the function
 * @separator: hte parameter that separates the strings
 * @n: parameter for the number of strings
 *
 *
 *
 * Return: A function that prints strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list list;

	const char *string;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(list, const char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(list);
	printf("\n");
}

