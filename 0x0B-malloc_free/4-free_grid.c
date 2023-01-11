#include "main.h"
/**
 * free_grid-  a function that frees a 2
 *  dimensional grid previously created
 *
 *  @grid: two dimensional grid.
 *
 *  @height: height of the grid
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 < height; i++)
		free(grid[index]);

	free(grid);
}
