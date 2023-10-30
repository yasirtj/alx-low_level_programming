#include "main.h"

/**
 * *create_array - creates and initializes an array of chars
 * @size: size of the array
 * @c: char
 * Return: pointer to the created array
**/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
