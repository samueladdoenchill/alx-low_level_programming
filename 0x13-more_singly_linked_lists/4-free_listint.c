#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to the head of the list to free
 *
 * Description: Frees each node in the list starting from the head, setting
 *              the head pointer to NULL when the list is fully freed.
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	/* Traverse the linked list and free each node */
	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
	/* Set the head pointer to NULL when the list is fully freed */
	head = NULL;
}

