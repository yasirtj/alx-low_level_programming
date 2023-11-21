#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: address of first node
 * @index: nth node
 * Return: nth node of the a listint_t list
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (count < index || current == NULL)
		return (NULL);
	return (current);

}

