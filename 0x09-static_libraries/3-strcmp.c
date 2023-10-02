#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * if strings are equal it returns 0.
 * if s1 is greater than s2 it returns greater than 0 value
 * if s1 is less than s2 it returns a value less than 0
 * @s1: first string
 * @s2: second string
 * Return: 0, greater than 0 or less than 0
 **/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
