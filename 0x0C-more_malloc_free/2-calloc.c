#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of members of the array
 * @size: size of the array
 * Return: a pointer to the allocated memory
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory_block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory_block = malloc(nmemb * sizeof(size));
	if (memory_block != NULL)
	{
		for (i = 0; i < size; i++)
		{
			memory_block[i] = 0;
		}
		return (memory_block);
	}
	else
		return (NULL);
}

