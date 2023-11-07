#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - the name of the function
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 *
 * Return: A function that creates a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)

{

dog_t *newdog = (dog_t *)malloc(sizeof(dog_t));

if (newdog == NULL)
{
	return (NULL);

}

newdog->name = strdup(name);
if (newdog->name == NULL)
{
	free(newdog);
	return (NULL);
}

newdog->owner = strdup(owner);

if (newdog->owner == NULL)
{
	free(newdog->name);
	free(newdog);
	return (NULL);

}

newdog->age = age;

return (newdog);
}
