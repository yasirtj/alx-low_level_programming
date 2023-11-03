#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *_strcpy(char *dest, char *src);
unsigned int _strlen(char *s);
void errors(void);
int _isdigit(char *c);
void copy_memory(void *dest, const void *src, size_t n);
char *_strncpy(char *dest, char *src, int n);

#endif
