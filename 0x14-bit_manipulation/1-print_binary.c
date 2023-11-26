#include "main.h"

/**
 * print_binary - Prints the binary rep. of a number
 * @n: number for which the binary rep. is printed
 * Return: Always 0 Success
**/

void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8;
	int printedNumbers = 0;

	while (bits)
	{
		if (n & 1L << --bits)
		{
			_putchar('1');
			printedNumbers++;
		}
		else if (printedNumbers)
		{
			_putchar('0');
		}
	}
	if (!printedNumbers)
	{
		_putchar('0');
	}
}
