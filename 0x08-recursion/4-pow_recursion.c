#include "main.h"

/**
 * _pow_recursion - calculates `x^y`
 * @x: base
 * @y: power
 * Return: integer number represent `x^y`
**/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
