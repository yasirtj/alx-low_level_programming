#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initilize dog
 * @d: dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog ownder
 * Return: Always 0 Success
 **/


void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = malloc(_strlen(name) + 1);
	if (d->name == NULL)
		return;
	d->owner = malloc(_strlen(owner) + 1);
	if (d->owner == NULL)
		return;
	_strcpy(d->name, name);
	d->age = age;
	_strcpy(d->owner, owner);
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
