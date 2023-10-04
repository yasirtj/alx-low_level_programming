#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to the newly allocated
 * space in memory which contains a copy of string given as arguments
 * @str: string to be copied
 * Return: pointer to string
**/

char *_strdup(char *str)
{
	size_t length = strlen(str) + 1;
	char *copy = malloc(length * sizeof(char));

	if (copy == 0)
	{
		return (NULL);
	}
	memcpy(copy, str, length);
	return (copy);
}
