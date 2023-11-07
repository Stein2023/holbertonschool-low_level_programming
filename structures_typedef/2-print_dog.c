#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - the name of the function
 * struct dog - the characteristics of the dog
 * @d: the parameter
 *
 *
 * Return: A function that prints a struct dog
 */



void print_dog(struct dog *d)
{

char *name;

if (d == NULL)
{
	;
}
if (d->name == NULL)
{
	printf("Name: (nil)\n");
}

else
{
printf("Name: %s\n", d->name);
}

}

