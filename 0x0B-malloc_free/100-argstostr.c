#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * *argstostr - concatenates all arguments
 * @ac: int input
 * @av: pointer to pointer to string
 * Return: pointer to new string
**/

char *argstostr(int ac, char **av)
{
	int i, j, total_length;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]);
	}
	result = (char *)malloc(total_length + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	result[0] = '\0';
	for (j = 0; j < ac; j++)
	{
		strcat(result, av[j]);
		strcat(result, "\n");
	}
	return (result);
}
