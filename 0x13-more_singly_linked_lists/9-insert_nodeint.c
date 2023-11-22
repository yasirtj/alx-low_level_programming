#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new node at given position
 * @head: address of first node
 * @idx: index of the list where new node should be added
 *  @n: element
 * Return: Address of new node or NULL if it failed
**/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i;
	listint_t *current, *temp;

	current = malloc(sizeof(listint_t));

	current->n = n;
	current->next = NULL;
	if (idx == 1)
	{
		current->next = *head;
		*head = current;
		return (idx);
	}
	temp = *head;
	for (i = 0; i < idx - 2; i++)
	{
		temp = temp->next;
	}
	current->next = temp;
	current->next = temp;
	return (idx);
}
