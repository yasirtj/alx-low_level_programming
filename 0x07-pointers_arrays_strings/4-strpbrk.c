#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: first value
 * @accept: accepted value
 * Return: a pointer to the byte n
 * that matches one of the bytes in `accept`
 * or NULL if no match
**/

char *_strpbrk(char *s, char *accept)
{
	int z;

	while (*s)
	{
		for (z = 0; accept[z]; z++)
		{
			if (*s == accept[z])
				return (s);
		}
		s++;
	}
	return ('\0');
}
