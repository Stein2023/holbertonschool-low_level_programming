#include <stdio.h>
#include "main.h"

/**
 * main - check 
 *
 * Return: Always 0.
 * @s: letter
 */

int _strlen(char *s)
{
	char *str;
	int len;

	str = "Eithan";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
