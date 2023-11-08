#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array in which search takes place
 * @size: number elements of the array
 * @cmp: pointer to the function used in searching
 * Return: index of the first element
 * for which the cmp function does not return 0
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == 0)
		return (NULL);
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
