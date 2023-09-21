#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: resulting string
 * @src: source string
 * @n: string length to be copied
 * Return: pointer to the copied string
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int SourceLength = 0;

	while (src[i++])
	{
		SourceLength++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = SourceLength; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
