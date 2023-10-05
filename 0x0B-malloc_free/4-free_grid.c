#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free 2D grid
 * @grid: grid array
 * @height: columns
 * Return: always (0) Success
**/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
