#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Description: This function prints a message followed by a newline character
 * using the printf function and returns 0 to indicate successful execution.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n < 0)
	printf("%d is negative\n", n);
	else
	printf("%d is zero\n", n);
	return (0);
}
