#ifndef DOG_STRUCT_H
#define DOG_STRUCT_H dog.h
/**
 * struct dog - the dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 * @dog_t: new name
 *
 * Return: the features of the dog
 */

struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
