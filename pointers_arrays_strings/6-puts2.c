#include <stdio.h>
#include "main.h"

/**
 *
 * puts2 - the function
 * Return: value
 * @str: the variable
 */


void puts2(char *str)

{

	int i, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i +=2 )
	{
		printf("%c", str[i]);

	}

	printf("\n");

}
