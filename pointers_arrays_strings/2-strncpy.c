#include <stdio.h>
#include "main.h"

/**
 * _strncpy - See description
 * @dest: char type string
 * @src: char type string
 * @n: the variable
 *
 *
 * Return: Pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{


	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';

	return (dest);
}
