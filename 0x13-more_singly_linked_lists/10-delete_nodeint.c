#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index index of listint_t list
 * @head: address of first node
 * @index: index of the not that should be deleted
 * Return: 1 if succeeded, -1 if it failed
**/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *temp;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
			current = current->next;
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
