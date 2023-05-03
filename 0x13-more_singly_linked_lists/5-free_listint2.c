#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head pointer to NULL
 * @head: a pointer to a pointer to the head of the list to free
 *
 * Description: Frees each node in the list starting from the head and sets the
 *              head pointer to NULL when the list is fully freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *current; /* Pointer to hold the current node being freed */

	/* If the head pointer is NULL, there is nothing to free */
	if (head == NULL)
		return;

	/* Loop through the list and free each node */
	while (*head != NULL)
	{
		current = *head; /* Store the current node in a pointer */
		*head = (*head)->next; /* Move the head pointer to the next node */
		free(current); /* Free the current node */
	}

	/* Set the head pointer to NULL once all nodes have been freed */
	*head = NULL;
}

