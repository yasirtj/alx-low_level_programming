#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - check if input is digit between 0 - 9
 * @c: input
 * Return: 1 if is digit, 0 if not
 */

int _isdigit(char *c)
{
	int i = 0;
	while (c[i])
	{
		if (c[i] < '0' || c[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - checks the length of the string
 * @s: -string to be checked
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * errors - handles errors
 * Return: exit 98
**/

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiple two integers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always (0) Sucess
**/

int main(int argc, char *argv[])
{
	char *first_string, *second_string;
	int first_length, second_length, length, i;
	int carry, first_digit, second_digit, *result, x = 0;

	first_string = argv[1];
	second_string = argv[2];
	if (argc != 3 || !_isdigit(first_string) || !_isdigit(first_string))
	{
		errors();
	}
	first_length = _strlen(first_string);
	second_length = _strlen(second_string);
	length = first_length + second_length + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (i = 0; i <= first_length + second_length; i++)
		result[i] = 0;
	for (first_length = first_length - 1; first_length >= 0; first_length--)
	{
		first_digit = first_string[first_length] - '0';
		carry = 0;
		for (second_length = _strlen(second_string) - 1;
				second_length >= 0; second_length--)
		{
			second_digit = second_string[second_length] - '0';
			carry = carry + result[first_length + second_length + 1]
				+ (first_digit * second_digit);
			result[first_length + second_length + 1] = carry % 10;
			carry = carry / 10;
		}
		if (carry > 0)
			result[first_length + second_length + 1] += carry;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (result[i])
			x = 1;
		if (x)
			_putchar(result[i] + '0');
	}
	if (!x)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
