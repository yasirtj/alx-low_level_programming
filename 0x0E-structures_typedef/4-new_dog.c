#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - function to create new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 * Return: new object dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	d->name = malloc(_strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(_strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}

/**
 * _strlen - checks the length of the string
 * @s: -string to be checked
 * Return: The length of the string
 */

int _strlen(char *s)
{

	int str_length = 0;

	while (s[str_length])
	{
		str_length++;
	}
	return (str_length);
}

/**
 * *_strcpy - copies the string pointerd to by src
 * @dest: char type string
 * @src: char type string
 * Description: copies the string pointed to by `src`
 * including the terminating null byte (\0), to the buffer pointed to by `dest`
 * Return: pointer to `dest`
 */
char *_strcpy(char *dest, char *src)
{
	int length = -1;

	do {
		length++;
		dest[length] = src[length];

	} while (src[length] != '\0');
	return (dest);
}
