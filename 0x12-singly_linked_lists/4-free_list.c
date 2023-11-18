#include "lists.h"

/**
 * free_list - Frees a list
 * @head: First node pointer
 * Return: Nothing
 **/
void free_list(list_t *head)
{
	list_t *current;


	while (head != NULL)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}

