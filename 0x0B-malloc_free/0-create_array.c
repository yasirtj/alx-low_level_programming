#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *create_array - create array of characters
 * and initilizes it with specfic char
 * @size: size of the array
 * @c: character used to initilize the array
 * Return: pointer to the array or NULL if it fails
**/

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array = malloc(size * sizeof(char));

	if (array == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
