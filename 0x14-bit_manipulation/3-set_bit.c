#include "main.h"

/**
 * set_bit - sets values of bit to 1 at given index
 * @n: pointer to value
 * @index: index
 * Return: 1 if it worked, or -1 if an error occured
**/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (!!(*n |= 1L << index));
}
