#include "main.h"

/**
 * set_string - sets the value of a pointer to a character
 * @s: pointer to pointer
 * @to: destination character
 * Return: Always (0) Success
**/

void set_string(char **s, char *to)
{
	*s = to;
}
