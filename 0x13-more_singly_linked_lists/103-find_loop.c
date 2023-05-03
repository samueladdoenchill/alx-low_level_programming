#include "lists.h"

/**
 * find_listint_loop - Finds the start of a loop in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - a pointer to the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr, *fast_ptr;

	if (!head)
		return (NULL);

	slow_ptr = head;
	fast_ptr = head;

	/* Using Floyd's cycle-finding algorithm to detect loop */
	while (fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			/* Reset slow_ptr to head and move both pointers until they meet */
			slow_ptr = head;

			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}

			/* loop found */
			return (slow_ptr);
		}
	}

	/* no loop found */
	return (NULL);
}

