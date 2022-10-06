#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates grids
 *
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: null or the grids
 */
int **alloc_grid(int width, int height)
{
	int **grids;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grids = malloc(sizeof(int *) * height);

	if (grids == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grids[i] = malloc(sizeof(int) * width);
		if (grids[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(grids[i]);
			free(grids);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grids[i][j] = 0;
	}
	return (grids);
}
