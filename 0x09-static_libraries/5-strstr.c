#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string in which searching occures
 * @needle: substring searching for
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring not found
**/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *first = haystack;
		char *last = needle;

		while (*first == *last && *last != '\0')
		{
			first++;
			last++;
		}
		if (*last == '\0')
			return (haystack);
	}
	return (NULL);
}

