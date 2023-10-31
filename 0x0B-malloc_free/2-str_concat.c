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
	size_t s1_length, s2_length, new_length, i;
	char *new_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	new_length = 0;
	s1_length = _strlen(s1);
	s2_length = _strlen(s2);
	new_length = s1_length + s2_length + 1;
	new_string = (char *)malloc(new_length * sizeof(char));
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_length; i++)
		new_string[i] = s1[i];
	for (i = 0; i < s2_length; i++)
		new_string[s1_length + i] = s2[i];
	new_string[new_length - 1] = '\0';
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
