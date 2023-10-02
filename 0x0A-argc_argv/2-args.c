#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number argument passed to main
 * @argv: pointer to a string holds the value of passed
 * Return: always (0) Success
 **/

int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
