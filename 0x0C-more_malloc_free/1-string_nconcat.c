#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1:first string
 * @s2: second string
 * @n: first byte of string 2
 * Return: pointer to the new string
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t new_length, first_string_length, second_string_length;
	char *new_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n == 0)
		return (NULL);
	first_string_length = _strlen(s1);
	second_string_length = _strlen(s2);
	new_length = first_string_length + second_string_length + 1;

	if (n >= _strlen(s2))
	{
		new_length += _strlen(s2) - n;
	}

	new_string = malloc(n * sizeof(char) * new_length + 1);

	if (new_string == NULL)
	{
		return (NULL);
	}
	_strcpy(new_string, s1);
	_strncpy(new_string + _strlen(s1), s2, n);
	new_string[new_length] = '\0';
	return (new_string);
}

/**
 * *_strcpy - copies the string pointerd to by src
 * @dest: char type string
 * @src: char type string
 * Description: copies the string pointed to by `src`
 * including the terminating null byte (\0), to the buffer pointed to by `dest`
 * Return: pointer to `dest`
 **/
char *_strcpy(char *dest, char *src)
{
	int length = -1;

	do {
		length++;
		dest[length] = src[length];

	} while (src[length] != '\0');
	return (dest);
}

/**
 * _strlen - checks the length of the string
 * @s: string to be checked
 * Return: The length of the string
**/

unsigned int _strlen(char *s)
{

	int str_length = 0;

	while (s[str_length])
	{
		str_length++;
	}
	return (str_length);
}

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
