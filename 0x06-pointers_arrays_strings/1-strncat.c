#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: stores the resulting string
 * @src: the source string
 * @n: number of bytes from src
 * Return: pointer to the resulting destination
 * **/


char *_strncat(char *dest, char *src, int n)
{
	int i = 0, DestinationLength = 0;

	while (dest[i++])
	{
		DestinationLength++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[DestinationLength] = src[i];
	}

	return (dest);
}
