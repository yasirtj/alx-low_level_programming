#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the contents of an array of ingigers
 * @a: array to be reversed
 * @n: number of the elements of the array
 * Return: array in reverse
**/

void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}

}
