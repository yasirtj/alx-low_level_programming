#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: first param
 * @size: size of matrix
 * Return: Always (0) Success
**/

void print_diagsums(int *a, int size)
{
	int i, n, FirstSum = 0, SecondSum = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		FirstSum = FirstSum + a[i];
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		SecondSum = SecondSum + a[n];
	printf("%d, %d\n", FirstSum, SecondSum);
}
