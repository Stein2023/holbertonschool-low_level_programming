#include "main.h"

/**
 * string_toupper - the function
 * @str: Pointer to the input string
 *
 * Return: Pointer to the modiffied string
 */

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string (same as input string).
 */


/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string (same as input string).
 */


/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string (same as input string).
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{

	if (str[i] >= 'a' && str[i] <= 'z')
	{

	str[i] = str[i] - 'a' + 'A';
	}
	i++;
	}

	return (str);
}

