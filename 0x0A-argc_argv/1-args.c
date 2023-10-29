#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: number argument passed to main
 * @argv: pointer to a string holds the value of passed
 * Return: always (0) Success
 **/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
