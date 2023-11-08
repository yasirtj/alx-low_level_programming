#include "function_pointers.h"

/**
 * array_iterator - contains function given as arguement
 * @array: pointer to an array
 * @size: size of the array
 * @action: pointer to void function
 * Return: void
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == 0)
		return;
	if (array != NULL)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}

