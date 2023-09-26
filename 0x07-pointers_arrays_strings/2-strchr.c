#include "main.h"

/**
 * _strchr - locates the character `c` in the string `s`
 * @s: string in which searchig takes place
 * @c: the char to be locaated
 * Return: location of char `c`
**/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
