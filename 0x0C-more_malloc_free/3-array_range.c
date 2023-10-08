#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * compare - compare elements to determin their order
 * @a: pointer a
 * @b: pointer b
 * Return: always (0) Success
**/

int compare(void *a, void *b)
{
	return (*(int *)a - *(int *)b);
}

/**
 * *array_range - function to create an array
 * @min: minimum number
 * @max: maximum number
 * Return: pointer to the created array
**/

int *array_range(int min, int max)
{
	int *created_array, size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	created_array = malloc(sizeof(int) * size);
	if (created_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		created_array[i] = min + i;
	}
	return (created_array);
}
