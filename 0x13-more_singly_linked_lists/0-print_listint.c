#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: the head pointer which points to the first node of the list
 * Return: number of nodes
 **/
size_t print_listint( const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}

