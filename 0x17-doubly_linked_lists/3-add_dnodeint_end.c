#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the head of the list.
 * @n: Integer value of the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_elem = malloc(sizeof(dlistint_t));
	dlistint_t *temp_elem = *head;

	if (!head || !new_elem)
	{
		return (NULL);
	}

	new_elem->n = n;
	new_elem->next = NULL;

	if (!*head)
	{
		new_elem->prev = NULL;
		*head = new_elem;
		return (*head);
	}

	while (temp_elem->next)
	{
		temp_elem = temp_elem->next;
	}

	temp_elem->next = new_elem;
	new_elem->prev = temp_elem;

	return (new_elem);
}
