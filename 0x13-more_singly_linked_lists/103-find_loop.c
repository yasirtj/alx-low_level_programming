#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Address of the first node
 * Return: Address of the loop where the loop starts,
 * or NULL if there is no loop
**/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			return (slow);
		}
	}
	return (NULL);
}
