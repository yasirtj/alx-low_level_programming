#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

	if (args == 0)
	{
		return (1);
	}
	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);
		sum = sum + number;
	}
	va_end(args);
	return (sum);
}
