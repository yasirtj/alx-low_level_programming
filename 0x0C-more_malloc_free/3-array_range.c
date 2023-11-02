#include "main.h"

/**
 * array_range - creates an array of given range
 * @min: minimum size
 * @max: maximum size
 * Return: a pointer to the newly created array
**/

int *array_range(int min, int max)
{
	int *array;
	int i, j;

	j = 0;
	if (min > max)
		return (NULL);
	array = malloc(sizeof(*array) * (max - min + 1));
	if (array != NULL)
	{
		for (i = min; i <= max; i++)
		{
			array[j] = i;
			j++;
		}

		return (array);
	}
		else
			return (NULL);
}
