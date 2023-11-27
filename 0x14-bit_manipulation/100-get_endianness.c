#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
**/

int get_endianness(void)
{
	unsigned long n = 1;

	return (*(char *)&n);
}
