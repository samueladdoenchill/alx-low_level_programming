#include "lists.h"

/**
 * get_dnodeint_at_index - Returns nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node, starting from 0.
 *
 * Return: Pointer to nth node, or NULL if node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_elem = head;

	while (current_elem && index)
	{
		index--;
		current_elem = current_elem->next;
	}
	return (current_elem);
}
