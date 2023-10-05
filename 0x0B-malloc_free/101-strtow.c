#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * **strtow - splits string into words
 * @str: pointer to an array of strng (words)
 * Return: array string
**/

char **strtow(char *str)
{
	int i, number_of_words;
	char *p, **words, *word;

	number_of_words = 0;
	i = 0;
	p = str;
	if (str == NULL || strcmp(str, "") == 0)
	{
		return (NULL);
	}
	for (; *p != '\0'; p++)
	{
		if (*p == 0)
		{
			number_of_words++;
		}
	}
	words = malloc((number_of_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	word = str;
	for (; *p != '\0'; p++)
	{
		if (*p == 0)
		{
			*p = '\0';
			words[i++] = word;
			word = p + 1;
		}
	}
	words[i] = word;
	return (words);
}
