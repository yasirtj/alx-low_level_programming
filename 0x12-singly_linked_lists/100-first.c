#include <stdio.h>
#include "lists.h"

/**
 * print_text - prints a text execute before main
 * Return: nothing
 **/

void __attribute__ ((constructor)) print_text(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
