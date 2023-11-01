#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - the function
 * @s1: the first parameter
 * @s2: the seoncd parameter
 *
 *
 * Return: function that concatenates two strings
 */

char *str_concat(char *s1, char *s2)
{

char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	result = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
