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

	d->name = malloc(sizeof(name) + 1);
	d->owner = malloc(sizeof(owner) + 1);
	if (d->name == NULL || d->owner == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
