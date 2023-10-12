#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints name
 * @name: name to be printed
 * @f: function pointer
 * Return: Always 0 Success
**/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
