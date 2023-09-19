#include "main.h"
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
	int length = -1;
	
	do
	{
		length++;

		dest[length] = src[length];

	} while (src[length] != '\0');
	
	return (dest);
}

