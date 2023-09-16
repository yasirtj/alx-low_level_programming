#include "main.h"

/**
 * print_line - print a straight line
 * @n: is the numberof times the _ character should be printed
 */

void print_line(int n)
{
	int lnchar;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnchar = 1; lnchar <= n; lnchar++)
			_putchar('_');
		_putchar('\n');
	}
}
