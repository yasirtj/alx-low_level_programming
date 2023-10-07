#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
	first_string_length = strlen(s1);
	second_string_length = strlen(s2);
	new_length = first_string_length + second_string_length + 1;

	if (n >= strlen(s2))
	{
		new_length += strlen(s2) - n;
	}

	new_string = malloc(n * sizeof(char) * new_length + 1);

	if (new_string == NULL)
	{
		return (NULL);
	}
	strcpy(new_string, s1);
	strncpy(new_string + strlen(s1), s2, n);
	new_string[new_length] = '\0';
	return (new_string);
}
