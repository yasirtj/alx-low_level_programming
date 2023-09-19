#include "main.h"
/**
 * puts2 - prints one character out of 2 of a string
 * followed by new line
 *@str: string to print the characters from
 *Return: 0
 */
void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		if (length % 2 == 0)
		{
			_putchar(str[length]);
		}

		length++;

	}

	_putchar('\n');
}
