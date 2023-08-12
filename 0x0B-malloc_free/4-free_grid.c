#include "main.h"

/**
* free_grid - free 2D array of alloc-grid function
* @grid: 2D array of integers to free
* @height: number of rows
*
* Return: Nothing
*/

void free_grid(int **grid, int height)
{
	int j = 0;

	if (grid == NULL)
		return;
	while (j < height)
		free((int *)grid[j++]);
	free(grid);
}
