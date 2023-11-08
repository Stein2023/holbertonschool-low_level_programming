#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - the name of the function
 * @name: the name that will be printed out
 * print - the function name
 *
 *
 * Return: A function that prints a name
 */

void print(char *name)
{
printf("Name: %s\n", name);
}

int main(void)
{
char name[] = "";
print_name(name, print);

return (0);
}

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
