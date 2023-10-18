#include <stdio.h>
#include "main.h"

/**
 *
 *
 */

void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
{
	i++;
}

for (j = len - 1; j >= 0; j--)
{
	putchar(s[j]);

}

	putchar('\n');
}
