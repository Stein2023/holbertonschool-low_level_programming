#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - the function name
 * @d: the parameter
 *
 * Return: Free the dogs
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
{
	free(d->name);
	free(d->owner);
	free(d);
}

}

