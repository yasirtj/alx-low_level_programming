#include "lists.h"

/**
 * list_len - returns number of elements of linked list
 * @h: linked list head
 * Return: number of elements of linked list
 **/

size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *ptr = h;

	if (h == NULL)
	{
		printf("list is empty");
	}

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
