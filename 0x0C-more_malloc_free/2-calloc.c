#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - Allocates a memory for an array using malloc()
 * @nmemb: array members (elements)
 * @size: array size
 * Return: A pointer to the allocated memory
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb *  size);
	return (ptr);
}

