#include "main.h"
#include <stdio.h>
#include <string.h>

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
 * main - print MIN number of coins
 * to  make change for an amount of money
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: Always (0) Success
**/

int main(int argc, char *argv[])
{
	int number_of_coins, result, j;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number_of_coins = _atoi(argv[1]);
	result = 0;
	if (number_of_coins < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && number_of_coins >= 0; j++)
	{
		while (number_of_coins >= coins[j])
		{
			result++;
			number_of_coins = number_of_coins - coins[j];
		}
	}
	printf("%d\n", result);
	return (0);
}
