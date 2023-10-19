#include "lists.h"

/**
 * list_len - Retruns number of elements in the list
 * @h: list which it's elements to be calculated
 * Return: Number of elements in the list
 **/

size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	nodes++;
	}
	return (nodes);
}
