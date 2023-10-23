#include "main.h"

/**
 * string_toupper - the function
 * @this: the pointer
 *
 * Return: change lowercasee letters to uppercase
 */

char *string_toupper(char *)
{

int index = 0;
	int desp = 'a' - 'A';

	for (index = 0; this[index] != '\0'; ++index)
	{
		if (this[index] >= 'a' && this[index] <= 'z')
		{
			this[index] = this[index] - desp;
		}
	}
	return (this);


}
