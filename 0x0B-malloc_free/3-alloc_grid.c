#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function that return a pointer to 2D int array
 * @width: rows
 * @height: coloumns
 * Return: pointer to 2D array
**/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
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
