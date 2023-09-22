#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @string: string to be checked and capitalized
 * Return: capitalized string
**/

char *cap_string(char *string)
{
	int index = 0;

	while (string[index])
	{
		while (!(string[index] >= 'a' && string[index] <= 'z'))
			index++;
		if (string[index - 1] == ' ' ||
			string[index - 1] == '\t' ||
			string[index - 1] == '\n' ||
			string[index - 1] == ',' ||
			string[index - 1] == ';' ||
			string[index - 1] == '.' ||
			string[index - 1] == '!' ||
			string[index - 1] == '?' ||
			string[index - 1] == '"' ||
			string[index - 1] == '(' ||
			string[index - 1] == ')' ||
			string[index - 1] == '{' ||
			string[index - 1] == '}' ||
			index == 0)
			string[index] -= 32;
		index++;
	}
	return (string);
}

