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
	unsigned int i;
	listint_t *new_node, *current;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next;
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
