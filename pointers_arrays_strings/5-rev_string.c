#include <stdio.h>
#include "main.h"

/**
 * print_rev - this
 * @s: this
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

        len = i;

for (j = len - 1; j >= 0; j--)
{
        putchar(s[j]);

}

