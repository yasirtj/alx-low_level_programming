#include "function_pointers.h"

/**
 * main - print opodes
 * @argc: number of agrs
 * @argv: array of args
 * Return: success
 **/

int main(int argc, char *argv[])
{
	int bytes, i;
	char *arraay;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arraay = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arraay[i]);
			break;
		}
		printf("%d02hhx\n", arraay[i]);
	}
	return (0);
}
