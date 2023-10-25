#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - the function
 * @s: the parameter
 */


void _print_rev_recursion(char *s)
{

	char tmp;
	int i, len, len1;
	i = 0;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
{
	len++;

}

	len1 = len - 1;

	if (i < len / 2) 

{
	i++;
}



{
	tmp = s[i];
	s[i] = s[len1];
	s[len1--] = tmp;


}
}
