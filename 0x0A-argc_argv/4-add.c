#include "main.h"
#include <stdio.h>
#include "ctype.h"
#include <string.h>

/**
 * check_number_digit - check if string is digit
 * @string: array of char
 * Return: always 0, (Success)
 **/

int check_number_digit(char *string)
{
	unsigned int count;

	while (count < strlen(string))
	{
		if (!isdigit(string[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}


/**
 * main - adds integers
 * @argc: number of arguments
 * @argv: pointer to string
 * Return: Always (0) Success
 **/

int main(int argc, char *argv[])
{
	int counter;
	int to_int;
	int sum = 0;

	counter = 1;

	while (counter < argc)
	{
		if (check_number_digit(argv[counter]))
		{
			to_int = _atoi(argv[counter]);
			sum = sum + to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		counter++;
	}
	printf("%d\n", sum);
	return (0);
}
