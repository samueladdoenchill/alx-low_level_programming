#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list at a certain index
 * @head: Pointer to the first node of the list
 * @index: The position of the node to be deleted
 * Return: 1 if successful, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* Declare pointers for the node to be deleted and its previous node */
	listint_t *node_to_del, *prev_node;
	/* Declare variable to store the index */
	unsigned int i;

	if (*head == NULL) /* Check if the list is empty */
		return (-1);
	node_to_del = *head; /* Initialize pointers */
	prev_node = *head;
	if (index == 0) /* If the node to be deleted is the first node */
	{
		*head = (*head)->next; /* Update head pointer to point to the next node */
		free(prev_node); /* Free the memory allocated for the deleted node */
		return (1);
	}
	/* Traverse the list to find the node to be deleted */
	for (i = 0; i <= index - 1; i++)
	{
		prev_node = node_to_del;
		node_to_del = node_to_del->next;
		if (node_to_del == NULL)
			return (-1);
	}
	if (node_to_del != NULL) /* If the node to be deleted is found */
	{
		/* If the node to be deleted is the first node */
		if (node_to_del == *head)
			*head = (*head)->next;
		/* Update previous node's next pointer to point to node after deleted node */
		prev_node->next = node_to_del->next;
		/* Set the deleted node's next pointer to NULL */
		node_to_del->next = NULL;
		/* Free the memory allocated for the deleted node */
		free(node_to_del);
		return (1);
	}
	else
	{
		return (-1);
	}
}

