#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees grid
 *
 * @grid: the grid to be freed
 * @height: the height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
