#include "lists.h"

/**
 * free_listint2 - Frees listint_t set head to NULL
 * @head: Address of first node
 * Return: Success 0
**/
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
}
