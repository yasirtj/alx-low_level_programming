#include "main.h"

/**
 * _strlen_recursion - calculates string length
 * @s: string
 * Return: integer number represents length of the string
**/

int _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s)
	{
		_strlen_recursion(s + 1);
		count++;
	}
	return (count);
}
