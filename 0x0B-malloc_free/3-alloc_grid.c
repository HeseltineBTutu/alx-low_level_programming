#include "main.h"
#include<stdlib.h>
/**
 * alloc_grid- a function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a pointer to a 2 dimensional array of integers
 *
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)calloc(height, sizeof(int *));
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)calloc(width, sizeof(int));
	}
	free(grid[i]);
	return (grid);
}
