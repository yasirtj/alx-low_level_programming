#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints all passed arguments
 * @format: list of types of arguments passed to the function
 * Return: nothing
**/

void print_all(const char * const format, ...)
{
	int i, print_separator;
	char c;
	float f;
	char *s;
	const char *fmt = format;
	va_list args;
	va_start(args, format);

	print_separator = 0;
	while (*fmt)
	{
		switch (*fmt)
		{
			case 'c':
				c = va_arg(args, int);
				if (print_separator)
					printf(", ");
				printf("%c", c);
				print_separator = 1;
				break;

			case 'i':
				i = va_arg(args, int);
				if (print_separator)
					printf(", ");
				printf("%d", i);
				print_separator = 1;
				break;
			case 'f':
				f = va_arg(args, double);
				if (print_separator)
					printf(", ");
				printf("%f", f);
				print_separator = 1;
				break;
			case 's':
				s = va_arg(args, char *);
				if (print_separator)
					printf(", ");
				if (s == NULL)
					printf("nil");
				else
					printf("%s", s);
				print_separator = 1;
				break;
			default:
				break;
		}
		fmt++;
	}
	va_end(args);
	printf("\n");
}
