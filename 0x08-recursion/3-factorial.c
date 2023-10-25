#include "main.h"

/**
 * factorial - calculates factorial of given number
 * @n: given number
 * Return: integer number represents factorial of `n`
**/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}
