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
	int len;

	s = "Eithan";
	len = _strlen(s);
	printf("%d\n", len);
	return (0);
}
