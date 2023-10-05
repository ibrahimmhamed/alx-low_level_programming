#include "main.h"
#include "stdlib.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously.
 *
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
*/

void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL)
	{
		return;
	}

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
