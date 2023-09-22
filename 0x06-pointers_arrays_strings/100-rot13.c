#include "main.h"

/**
 * rot13 - encode string by rotating it to the 13th letter
 * @string: string to be encoded by ROT13
 * Return: resulting string after applying ROT13
**/

char *rot13(char *string)
{
	char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	while (*(string + i) != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (*(string + i) == alphabets[j])
			{
				*(string + i) = key[j];
				break;
			}
		}
		i++;
	}
	return (string);
}
