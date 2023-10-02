#include "main.h"
#include <stdio.h>

/**
 * main - prints program name
 * @argc: number argument passed to main
 * @argv: pointer to a string holds the value of passed
 * Return: always (0) Success
**/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("program name is %s\n", *argv);
	return (0);
}
