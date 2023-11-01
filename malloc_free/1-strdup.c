#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * _strdup - the function
 * @str: the parameter
 *
 *
 * Return: space in memory which contains a copy of string given as a parameter
 */

char *_strdup(char *str)
{

char *string;

	if (str == NULL)
	{
		return (NULL);
	}
string = (char *)malloc(strlen(str) + 1);

	if (string == NULL)
	{
		return (NULL);
	}

	strcpy(string, str);

	return (string);


}
