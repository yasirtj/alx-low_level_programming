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
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *head2;
	listint_t *node;

	head2 = NULL;
	add_nodeint(&head2, 0);
	add_nodeint(&head2, 1);
	add_nodeint(&head2, 2);
	add_nodeint(&head2, 3);
	add_nodeint(&head2, 4);
	add_nodeint(&head2, 98);
	add_nodeint(&head2, 402);
	add_nodeint(&head2, 1024);
	print_listint_safe(head2);
	head = NULL;
	node = add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	node->next = add_nodeint(&head, 98);
	add_nodeint(&head, 402);
	add_nodeint(&head, 1024);
	print_listint_safe(head);
	free_listint_safe(&head2);
	free_listint_safe(&head);
	printf("%p, %p\n", (void *)head2, (void *)head);
	return (0);
}
