#include <stdio.h>
#include "main.h"

/**
 * swap_int - variables
 * @a: the letter
 * @b: the letter
 * main - this
 * Return: swaps values
 */

void swap_int(int *a, int *b)
{

int c;

c = *a;
*a = *b;
*b = c;
}
