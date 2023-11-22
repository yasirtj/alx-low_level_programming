#include "lists.h"

/**
 * free_listint_safe - free list safe
 * @h: address of the first node
 * Return: size of the free'd list
**/
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, __attribute__((__unused__))*temp;

	while (*h != NULL)
	{
		size++;
		if (*h <= (*h)->next)
		{
			temp = (*h)->next;
			free(*h);
			*h = NULL;
			break;
		}
		current = (*h)->next;
		free(*h);
		*h = current;
	}
	return (size);
}
