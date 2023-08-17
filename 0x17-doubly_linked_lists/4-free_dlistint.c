#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * This function frees each node in the linked list, starting from the
 * provided head node. It iterates through list, deallocates memory
 * of each node, and updates the head pointer as necessary.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
