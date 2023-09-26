#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: resulting address
 * @src: source area to be copied
 * @n: number of bytes to be copied
 *Return: destination where memory area are copied
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int f;

	for (f = 0; f < n; f++)
	{
		dest[f] = src[f];
	}
	return (dest);
}
