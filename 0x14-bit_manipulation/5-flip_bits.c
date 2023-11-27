#include "main.h"

/**
 * flip_bits - filps bits
 *@n: bits
 * @m: number of times to flip
 * Return: number of bits you would need to flip
 * to get from one number of another
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long xor_value	= n ^ m;
	int count = 0;

	while (xor_value)
	{
		if (xor_value & 1ul)
		{
			count++;
		}
		xor_value = xor_value >> 1;
	}
	return (count);
}
