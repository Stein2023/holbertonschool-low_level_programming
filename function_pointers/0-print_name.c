#include <stdio.h>
#include "function_pointers.h"

/**
 * print - the name of the function
 * @name: first parameter
 *
 *
 * Return: Prints it a name
 */

void print(char *name)
{
	printf("Name: %s\n", name);
}

/**
 * main - entry point of the program
 *
 *
 * Return: Always 0
 */

int main(void)
{
	char name[] = "Martin Stein";

	print_name(name, print);

	return (0);
}

/**
 * print_name - Printing a name with a function pointer
 * @name: the name
 * @f: a parameter
 */

void print_name(char *name, void (*f)(char *))
{

	(*f)(name);
}

