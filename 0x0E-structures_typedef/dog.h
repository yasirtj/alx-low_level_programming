#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * description: dog structure
**/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dot_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dot_t *new_dog(char *name, float age, char *owner);
void free_dog(dot_t *d);

#endif
