#include "main.h"

/**
 * strtow - splits string to words
 * @str: string to be splitted
 * Return: pointer to an array of strings
 **/
char **strtow(char *str);

char **strtow(char *str)
{
	int i, j, word_count = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (*str)
	{
		if (*str != ' ')
		{
			int word_length = 0;
			char *word_start = str;

			while (*str && *str != ' ')
			{
				word_length++;
				str++;
			}

			words[i] = (char *)malloc((word_length + 1) * sizeof(char));
			if (words[i] == NULL)
				return (NULL);

			for (j = 0; j < word_length; j++)
			{
				words[i][j] = word_start[j];
			}
			words[i][j] = '\0';
			i++;
		}
		else
		{
			str++;
		}
	}

	words[word_count] = NULL;

	return (words);
}
