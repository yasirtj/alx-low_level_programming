#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: head - contains address of first node
 * Return: Number of elements in a linked listint_t list
**/

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
