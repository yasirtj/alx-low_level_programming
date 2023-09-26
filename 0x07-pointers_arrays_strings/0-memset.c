#include <stdio.h>
#include "main.h"

/**
 * _memset - fills the memory with constant type
 * @s: starting address of the memory
 * @b: the value
 * @n: number of bytes
 * Return: change array with new values
**/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
