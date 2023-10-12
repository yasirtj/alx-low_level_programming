#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a callback function printing array elements
 * @array: array of integers
 * @size: array size
 * @action: pointer to the function
 * Return: Always 0 Success
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
