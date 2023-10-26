#include <stdio.h>

/**
 * main - the function
 * @argc: the first parameter
 * @argv: the second parameter
 *
 *
 * Return: Prints all the arguments it recieves
 */


int main(int argc, char *argv[])
{

int c;
for (c = 0; c < argc; c++)
	printf("argv[%2d]: %s\n", c, argv[c]);

return (0);


}
