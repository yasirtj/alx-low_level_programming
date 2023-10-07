#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Allocates a memory using malloc()
 * @b: number of bytes to be allocated
 * Return: pointer to the allocated memory
**/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b * sizeof(int));
	if (ptr == NULL)
		exit(98);

	return (ptr);
}

