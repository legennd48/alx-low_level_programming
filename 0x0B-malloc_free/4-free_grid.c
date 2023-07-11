#include "main.h"
#include <stdlib.h>

/**
 * free-grid - frees the memory of a 2d array
 * @grid: pointer to 2d array
 * @height: number of rows in array.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
