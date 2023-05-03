#include "lists.h"

/**
 * reverse_listint - Reverses a linked list in place.
 *
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: A pointer to the new head of the list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next = NULL;

	/* Loop through the list */
	for (; current != NULL; current = next)
	{
		next = current->next;
		current->next = prev; /* Reverse the link */
		prev = current;
	}
	*head = prev; /* Set the new head */
	return (*head);
}

