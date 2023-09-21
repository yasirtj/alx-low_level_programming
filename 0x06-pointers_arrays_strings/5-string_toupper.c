#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @string: string to be checked
 * Return: uppercase string
**/

char *string_toupper(char *string)
{
	int i = 0;

	while (*(string + i) != '\0')
	{
		if  (*(string + i) >= 'a' && *(string + i) <= 'z')
		{
			*(string + i) = *(string + i) - 32;
		}
		i++;
	}
	return (string);
}
