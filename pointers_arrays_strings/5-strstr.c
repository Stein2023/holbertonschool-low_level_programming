#include "main.h"

/**
 * _strstr - the function
 * @haystack: a parameter
 * @needle: second parameter
 *
 *
 * Return: the location of a substring
 */



char *_strstr(char *haystack, char *needle)
{

int i, s;
s = 0;

while (needle[s] != '\0')
	s++;

while (*haystack)
{

for (i = 0; needle[i]; i++)

{
	if (haystack[i] != needle[i])
		break;

	if (i != s)
	haystack++;

	else

		return (haystack);

}

	return ('\0');

}
}
