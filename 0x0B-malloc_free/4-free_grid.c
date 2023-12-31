#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the grid of integers
 *
 * @grid: address of 2d grid
 * @height: height of grid
 *
 * Return: Always 0.
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
