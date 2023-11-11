#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters
 * @n: parameter
 * Return: summation
 **/

int sum_them_all(const unsigned int n, ...)
{
	int sum, number;
	unsigned int i;
	va_list args;

	sum = 0;

	if (args == 0)
		return (1);
	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);
		sum = sum + number;
	}
	va_end(args);
	return (sum);
}
