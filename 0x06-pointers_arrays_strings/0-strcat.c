#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: source appended string
 * @dest: resulting string destination
 * Return: pointer to resulting string dest
 **/

char *_strcat(char *dest, char *src)
{
	int i;
	int j = strlen(src);

	for (i = 0; i < (dest[i] != '\0'); i++)
	{
		dest[i + j] = src[i];
	}

	dest[i + j] = '\0';

	return (dest);
}
