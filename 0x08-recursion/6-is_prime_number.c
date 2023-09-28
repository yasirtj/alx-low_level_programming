#include "main.h"

int GetPrime(int a, int b);

/**
 * is_prime_number - check if the number is prime or not
 * @n: subject number
 * Return: 1 if input integer is prime number, otherwise 0
**/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (GetPrime(n, n - 1));
}

/**
 * GetPrime - calculate if number is prime
 * @a: subject number
 * @b: iteration
 * Return: 1 if number is prime, 0 otherwise
**/

int GetPrime(int a, int b)
{
	if (b == 1)
		return (1);
	if (a % b == 0 && b > 0)
		return (0);
	return (GetPrime(a, b - 1));
}
