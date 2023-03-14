#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: pointer to 2D array
 * @height: height of array
 */



void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL)
		free(grid);
	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}

