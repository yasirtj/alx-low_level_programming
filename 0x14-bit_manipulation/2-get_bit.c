#include "main.h"

/**
 * get_bit - Returns value of a bit at given index
 * @n: bit
 * @index: given index
 * Return: value of a bit at given index
**/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (n >> index & 1);
}
