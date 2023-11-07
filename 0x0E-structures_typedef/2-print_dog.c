#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints dog struct
 * @d: pointer to dog struct
 * Return: Always 0 Success
**/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("%s\n", d->name ? d->name : "(nil)");
	printf("%f\n", d->age);
	printf("%s\n", d->owner ? d->owner : "(nil)");
}