#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - the function
 * @n: the parameter
 * @divisor: the second parameter
 *
 * Return: return 1 if the integer is prime otherwise return 0
 */

int is_prime_number(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_number(n, divisor + 1));
}

