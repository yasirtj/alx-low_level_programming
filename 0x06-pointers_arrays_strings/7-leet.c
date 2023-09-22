#include "main.h"

/**
 * leet - encode strings to numbers
 * @string: string to be encoded
 * Return: encoded numbers
**/

char *leet(char *string)
{
	int i, j;
	char string1[] = "aAeEoOtTlL";
	char string2[] = "4433007711";

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (string[i] == string1[j])
			{
				string[i] = string2[j];
			}
		}
	}
	return (string);
}

