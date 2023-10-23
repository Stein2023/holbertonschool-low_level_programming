#include "main.h"

/**
 * string_toupper - the function
 * @*: the pointer
 *
 * Return: change lowercasee letters to uppercase
 */

char *string_toupper(char *)
{

int index = 0;
	int desp = 'a' - 'A';

	for (index = 0; *[index] != '\0'; ++index)
	{
		if (*[index] >= 'a' && *[index] <= 'z')
		{
			*[index] = *[index] - desp;
		}
	}
	return (*);


}
