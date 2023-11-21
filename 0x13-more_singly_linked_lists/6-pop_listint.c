#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: Address of the first node
 * Return: the head node's data
 **/
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (*head == NULL)
		return (0);
	current = *head;
	data = current->n;
	*head = (*head)->next;
	free(current);
	return (data);
}
