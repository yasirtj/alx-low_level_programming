#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - variadic function prints a string
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: nothing
 * **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char*));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		if (separator == NULL)
		{
			printf("nil");
		}

		va_end(args);
	}
}

