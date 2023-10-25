#include "main.h"

int check_prime_number(int x, int y);

/**
 * is_prime_number - check if number is prime
 * @n: given number
 * Return: 1 if given number is prime, otherwise 0
**/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime_number(n, n - 1));
}

/**
 * check_prime_number - check if number is prime
 * @x: first parameter
 * @y: second parameter
 * Return: 1 if number is prime otherwise 0
**/

int check_prime_number(int x, int y)
{
	if (y == 1)
		return (1);
	if (x % y == 0 && y > 0)
		return (0);
	return (check_prime_number(x, y - 1));
}

