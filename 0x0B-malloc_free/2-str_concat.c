#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: 1st, source
 * @s2: 2nd string, destination
 * Return: pointer to the newly allocted space
 * in memory
**/

char *str_concat(char *s1, char *s2)
{
	size_t length_s1, length_s2, new_length;
	char *new_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length_s1 = strlen(s1);
	length_s2 = strlen(s2);
	new_length = length_s1 + length_s2 + 1;
	new_string = malloc(new_length * sizeof(char));

	if (new_string == NULL)
	{
		return (NULL);
	}
	memcpy(new_string, s1, length_s1);
	memcpy(new_string + length_s1, s2, length_s2);
	new_string[new_length - 1] = '\0';
	return (new_string);
}
