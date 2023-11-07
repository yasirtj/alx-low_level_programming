#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees a dog
 * @d: dog
 * Return: Always 0 Success
 **/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
