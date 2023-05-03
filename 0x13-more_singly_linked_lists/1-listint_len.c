#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list
 * @h: Pointer to the head of the list to be evaluated
 * Return: Number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current;

	/* Traverse the list while counting the number of nodes */
	for (current = h; current != NULL; current = current->next)
	{
		count++;
	}

	/* Return the count of nodes */
	return (count);
}
