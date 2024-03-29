#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name
 * @f: void pointer to function
 * Return: nothing
**/
void print_name(char *name, void (*f)(char *))
{
	if (f == 0)
		return;

	if (name != NULL)
		(*f)(name);
}
