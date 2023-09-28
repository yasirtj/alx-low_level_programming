#include "main.h"

int _GetSqrt(int x, int i);

/**
 * _GetSqrt - get acutal square root
 * @x: number to calculate sqrt
 * @i: iterator
 * Return: square orrt of a number `x`
**/

int _GetSqrt(int x, int i)
{
	if (i * i > x)
		return (-1);
	if (i * i == x)
		return (i);
	return (_GetSqrt(x, i + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: number to processed
 * Return: an integer number represents SQRT
**/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_GetSqrt(n, 0));
}
