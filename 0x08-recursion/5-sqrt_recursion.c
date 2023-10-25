#include "main.h"

int calculate_sqrt(int x, int y);

/**
 * calculate_sqrt - calculates square root
 * @x: first number
 * @y: second number
 * Return: square root
**/

int calculate_sqrt(int x, int y)
{
	if (y * y > x)
		return (-1);
	if (y * y == x)
		return (y);
	return (calculate_sqrt(x, y + 1));
}


/**
 * _sqrt_recursion - calculates natural sqrt of number
 * @n: given number
 * Return: square root of given number `n`
**/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (calculate_sqrt(n, 0));
}
