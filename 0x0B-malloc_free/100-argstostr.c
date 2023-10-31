#include "main.h"

/**
 * argstostr - concats all argumments of the program
 * @ac: ac
 * @av: av
 * Return: pointer to new string
 **/

char *argstostr(int ac, char **av)
{
	int i, j, total_length;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	total_length = 0;
	for (i = 0; i < ac; i++)
		total_length += _strlen(av[i]) + 1;
	result = (char *)malloc(total_length + 1);
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	for (j = 0; j < ac; j++)
	{
		_strcat(result, av[j]);
		if (j < ac - 1)
			_strcat(result, "\n");
	}
	return (result);

}

/**
 * _strcat - concatenates two strings
 * @src: source appended string
 * @dest: resulting string destination
 * Return: pointer to resulting string dest
 **/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = _strlen(dest);

	while (dest[i] != '\0')
	{
		++i;
	}

	for (j = 0; (src[j] != '\0'); ++j, ++i)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

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

