#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer used to store the result
 * @size_r: the size of the buffer `r`
 * Return: pointer to the result
**/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = 0, l2 = 0, c = 0, a, b, sum, big;

	while (n1[l1] != '\0')
		l1++;
	while (n2[l2] != '\0')
		l2++;
	if (l1 > l2)
		big = l1;
	else
		big = l2;
	if ((big + 1) >= size_r)
		return (0);
	r[big + 1] = '\0';

	while (big >= 0)
	{
		a = (n1[l1 - 1] - '0');
		b = (n1[l2 - 1] - '0');
		if (l1 > 0 && l2 > 0)
			sum = a + b + c;
		else if (l1 < 0 && l2 > 0)
			sum = b + c;
		else if (l1 > 0 && l2 < 0)
			sum = a + c;
		else
			sum = c;

		if (sum > 9)
		{
			c = sum / 10;
			sum = (sum % 10) + '0';
		}
		else
		{
			c = 0;
			sum += '0';
		}
	}
	r[big] = sum;
	l1--;
	l2--;
	big--;

if (*(r) != 0)
{
	return (r);
}
else
	return (r + 1);
	}

