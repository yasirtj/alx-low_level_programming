#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Address of the first node
 * Return: Number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	int count  = 0;
	const listint_t *current;

	if (head == NULL)
	{
		exit(98);
	}
	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;

		if (current == head)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
		}
	}
	return (count);
}
