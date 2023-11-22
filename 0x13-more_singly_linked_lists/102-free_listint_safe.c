#include "lists.h"

/**
 * free_listint_safe - free list safe
 * @h: address of the first node
 * Return: size of the free'd list
**/
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *slow, *fast, *temp;

	slow = *h;
	fast = *h;
	while (slow && fast && fast->next)
	{
		size++;
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			while (*h != slow)
			{
				temp = *h;
				*h = (*h)->next;
				free(temp);
				size++;
			}
			free(slow);
			*h = NULL;
			break;
		}
	}
	return (size);
}

