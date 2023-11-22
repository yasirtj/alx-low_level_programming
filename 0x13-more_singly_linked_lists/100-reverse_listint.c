#include "lists.h"

/**
 * reverse_listint - Reverses listint_t list
 * @head: address of the first node
 * Return: pointer to first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *next;

	current = *head;
	*head = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = *head;
		*head = current;
		current = next;
	}
	return (*head);
}
