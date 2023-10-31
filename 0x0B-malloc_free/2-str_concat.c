#include "main.h"

/**
 * str_concat - concats two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space in memory
 * which contains contents of s1
 * followed by contents of s2
 **/

char *str_concat(char *s1, char *s2)
{
	size_t s1_length, s2_length, new_length;
	char *new_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	new_length = 0;
	new_string = malloc(new_length * sizeof(char));
	s1_length = _strlen(s1);
	s2_length = _strlen(s2);
	new_length = s1_length + s2_length + 1;
	new_string[new_length - 1] = '\0';
	if (new_string == NULL)
	{
		return (NULL);
	}
	return (new_string);
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
