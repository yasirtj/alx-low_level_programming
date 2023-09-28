#include "main.h"

int check_palindrome(char *string, int i, int length);
int _string_length(char *string);

/**
 * is_palindrome - returns 1 if number is palindrome, otherwise returns 0
 * @s: string to be checked
 * Return: 1 if string is palindrome, 0 otherwise
**/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _string_length(s)));
}

/**
 * _string_length - returns the length of a string
 * @string: string to calculate length
 * Return: integer number represents string length
**/

int _string_length(char *string)
{
	if (*string == '\0')
		return (0);
	return (1 + _string_length(string + 1));
}

/**
 * check_palindrome - check char for palindrome
 * @string: subject string
 * @i: to iterate with
 * @length: length of the string
 * Return: 1 if number is palindrom, otherwise 0
**/

int check_palindrome(char *string, int i, int length)
{
	if (*(string + i) != *(string + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (check_palindrome(string, i + 1, length - 1));
}
