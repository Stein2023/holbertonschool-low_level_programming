#include "main.h"
#include <stdio.h>

/**
 * rev_string - this
 * @s: this
 */

void rev_string(char *s)
{

	s = "My school";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);


}
