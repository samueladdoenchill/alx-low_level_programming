#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the linked list.
 * @idx: Index of list where new node should be added. Index starts at 0.
 * @n: Integer value of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 *         If it is not possible to add the new node at index idx,
 *         do not add the new node and return NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_elem = *h, *new_elem;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (; idx != 1; idx--)
	{
		current_elem = current_elem->next;
		if (!current_elem)
		{
			return (NULL);
		}
	}

	if (!current_elem->next)
	{
		return (add_dnodeint_end(h, n));
	}

	new_elem = malloc(sizeof(dlistint_t));

	if (!new_elem)
	{
		return (NULL);
	}
	new_elem->n = n;
	new_elem->prev = current_elem;
	new_elem->next = current_elem->next;
	current_elem->next->prev = new_elem;
	current_elem->next = new_elem;

	return (new_elem);
}
