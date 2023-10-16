#include "main.h"

/**
 *more_numbers - this thing
 *
 */

void more_numbers(void)
{
int c;
int a;
for (a = 0; a < 10; a++)
{
	for (c = 0; c <= 14; c++)

{

	if (c >= 10)

	_putchar('1');

	_putchar(c % 10 + 48);


}
	_putchar('\n');
}

}
