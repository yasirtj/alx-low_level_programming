#include "main.h"

/**
 * alloc_grid - @D arraay of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to 2D array
 **/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * width);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		array[i] = malloc(sizeof(int *) * height);
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < i; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
