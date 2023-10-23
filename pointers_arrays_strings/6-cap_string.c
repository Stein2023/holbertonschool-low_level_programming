#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @entry: Input string to be capitalized.
 *
 *
 * Return: The output 
 */

char *cap_string(char *entry)
{
	int index, count;
	char chars[] = {' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', '\n', '\0'};


	for (index = 0; entry[index] != '\0'; index++)
	{
		if (entry[index] >= 'a' && entry[index] <= 'z')
		{
			entry[index] = entry[index] - 'a' + 'A';
		}

		for (count = 0; chars[count] != '\0'; count++)
		{
			if (chars[count] == entry[index])
			{

				break;
			}
		}
	}
	return (entry);
}
