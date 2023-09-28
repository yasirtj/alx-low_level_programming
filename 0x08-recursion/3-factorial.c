#include "main.h"

/**
 * factorial - returns the factorial of given number
 * @n: number to be factorialized
 * Return: integer number represent the factorial
**/

int factorial(int n)
{
	if (n < 0)
	{
		return -1;
	}
	else if (n == 0)
	{
		return 1;
	}
	else 
	{
		return (n * factorial(n - 1));
	}
}
