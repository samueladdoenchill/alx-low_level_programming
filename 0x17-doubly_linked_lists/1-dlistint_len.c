#include "lists.h"

/**
 * dlistint_len - Returns number of elements in linked dlistint_t list.
 * @h: The head node of the doubly linked list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	register int length = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		h = h->next;
		length++;
	}

	return (length);
}
