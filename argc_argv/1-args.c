#include <stdio.h>

/**
 * main - the function
 * @argc: the parameter
 * @argv: the second parameter
 *
 *
 * Return: prints the number of arguments passed to it
 */

int main(int argc, char *argv[])
{

int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");

}

