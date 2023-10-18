#include <stdio.h>
#include "main.h"

/**
 * main - check
 * _strlen - this
 * Return: Always 0.
 * @s: letter
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
{
		len++;

}
	return (len);
}
