#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup -  allocates space in memory
 * @str: string
 * Return: pointer to the newly allocated space in memory
 **/

char *_strdup(char *str)
{
	char *alloc_string;
	unsigned int length = _strlen(str);

	if (str == NULL)
		return (NULL);
	alloc_string = malloc((length + 1) * sizeof(char));

	if (alloc_string == NULL)
		return (NULL);
	_strcpy(alloc_string, str);
	return (alloc_string);

}

/**
 * *_strcpy - copies the string pointerd to by src
 * @dest: char type string
 * @src: char type string
 * Description: copies the string pointed to by `src`
 * including the terminating null byte (\0), to the buffer pointed to by `dest`
 * Return: pointer to `dest`
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;

	do {
		dest[length] = src[length];
		length++;
	} while (src[length - 1] != '\0');
	return (dest);
}

/**
 * _strlen - checks the length of the string
 * @s: string to be checked
 * Return: The length of the string
 **/

int _strlen(char *s)
{

	int str_length = 0;

	while (s[str_length])
	{
		str_length++;
	}
	return (str_length);
}
