#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: Pointer to the list
 * @index: Position of the nth node
 * Return: Pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int i;

	/* Check if the head is NULL */
	if (head == NULL)
	{
		printf("The list is empty.\n");
		return (NULL);
	}

	current_node = head;
	/* Traverse the list until we reach the nth node */
	for (i = 0; current_node != NULL && i < index; i++)
		current_node = current_node->next;

	/* If the nth node doesn't exist, return NULL */
	if (i != index)
	{
		printf("The list is shorter than %d nodes.\n", index);
		return (NULL);
	}

	/* Return the nth node */
	return (current_node);
}

