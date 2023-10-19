#include "lists.h"

/**
 * add_node - adds new node at begining of list
 * @head: pointer to first list element
 * @str: element to be added to the list
 * Return: address ofvthe new element
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{

		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
