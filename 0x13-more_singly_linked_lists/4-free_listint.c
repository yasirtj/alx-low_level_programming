#include "lists.h"

/**
 * free_listint - free linstint_t list
 * @head: Address of the first node
 * Return: Success 0
 **/
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
