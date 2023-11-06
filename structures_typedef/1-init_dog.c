#ifndef DOG_H
#define DOG_H
#include "dog.h"
/**
 * struct dog - dog data
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * @d: the letter
 * Description: Defines metadata about the dog and type of dog's struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
}
#endif
