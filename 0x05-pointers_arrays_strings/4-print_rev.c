#include "main.h"
/**
 * print_rev - printrs a string in reverse, followd by new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, j, length;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	length = i;

	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');

}
