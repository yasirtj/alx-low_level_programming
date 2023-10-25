#include "main.h"

int palindrome(char *string, int i, int length);
int get_str_length(char *string);

/**
 * is_palindrome - returns 1 if string is palindrome, otherwise 0
 * palindrome string is a string that can be read from both directions
 * @s: string to be checked
 * Return: 1 if string is palindrome, otherwise 0
**/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome(s, 0, get_str_length(s)));
}

/**
 * get_str_length - get string length
 * @string: string
 * Return: integer number represents length of `string`
**/

int get_str_length(char *string)
{
	if (*string == '\0')
		return (0);
	return (1 + get_str_length(string + 1));
}

/**
 * palindrome - string palindrom check
 * @string:string to be checked
 * @x: variable x
 * @length: length of the given string
 * Return: 1 if string is palindrome, otherwise 0
**/

int palindrome(char *string, int x, int length)
{
	if (*(string + x) != *(string + length - 1))
		return (0);
	if (x >= length)
		return (1);
	return (palindrome(string, x + 1, length - 1));
}
