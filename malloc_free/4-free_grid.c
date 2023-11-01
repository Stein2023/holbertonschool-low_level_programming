#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - the function
 * @grid: the parameter
 * @height: the second parameter
 *
 *
 * Return: write a function tht frees a two dimensional grid
 */


void free_grid(int **grid, int height)
{
int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
