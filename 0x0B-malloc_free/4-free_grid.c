#include "main.h"

/**
 * free_grid - frees a 2D array
 * @grid: pointer to array
 * @height: height of the array
 * Return: nothing
 **/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
