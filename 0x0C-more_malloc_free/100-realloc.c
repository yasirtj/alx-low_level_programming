#include "main.h"

/**
 * _realloc - act as realloc() build-in function
 * @ptr: pointer to he previously allocted
 * @old_size: old allocated memory size
 * @new_size: new size to be allocated
 * Return: pointer to the newly allocated space
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	copy_memory(new_ptr, ptr, new_size);
	free(ptr);
	return (new_ptr);
}
/**
 * copy_memory - copy memory area
 * @dest: destination
 * @src: source
 * @n: size
 * Return: nothing
 **/
void copy_memory(void *dest, const void *src, size_t n)
{
	size_t i;

	if (dest == NULL || src == NULL || n == 0)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		((char *)dest)[i] = ((char *)src)[i];
	}
}
