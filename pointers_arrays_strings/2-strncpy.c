#include <stdio.h>
#include "main.h"

/**
 * _strcpy - See description
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strncpy(char *dest, char *src, int n)
{


	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[i] = '\0';

	return (dest);
}
