#include <stdio.h>
#include "function_pointers.h"
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

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
