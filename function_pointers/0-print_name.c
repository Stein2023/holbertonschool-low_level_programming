#include <stdio.h>
#include "function_pointers.h"
#ifndef POINTERS_H
#define POINTER_H
/**
 * print_name - Print a name for a fuction for pointer
 * @name: char string
 * @f: function pointer that takes in a string argument
 */

void print_name(char *name, void (*f)(char *))
{

f(name);

}
#endif
