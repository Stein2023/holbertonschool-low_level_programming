#include <stdio.h>
#include "main.h"

/**
 * puts2 - this
 * @start_index - this
 * @str: cositas
 */

void puts2(char *str)
{

	int len, start_index;

	len = 0;


	while (str[len] != '\0')

	{

		len++;

	}

	if (len % 2 == 0)

	{
		start_index = len / 2;

	}

	else

	{

		start_index = (len - 1) / 2;

	}

	int i = start_index;

	for (i < len; i++;)
	{
	printf("%c", str[i]);

	}

	printf("\n");

}
