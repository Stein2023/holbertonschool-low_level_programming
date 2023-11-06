#ifndef DOG_STRUCT_H
#define DOG_STRUCT_H dog.h
/**
 * struct dog - the dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 *
 * Return: the features of the dog
 */

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
