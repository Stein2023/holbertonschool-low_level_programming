#include <stdio.h>
#include <stdlib.h>

/**
 * main - the function
 * @argc: the first parameter
 * @argv: the second parameter
 *
 *
 * Return: Program that multiplies two numbers
 */


int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	int a, b, sum;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a * b;

	printf("%d\n", sum);
	return (0);
}
