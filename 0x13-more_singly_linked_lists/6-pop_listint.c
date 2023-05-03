#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head node of the list
 *
 * Return: the integer value stored in the head node
 */
int pop_listint(listint_t **head)
{
	/* Declare a pointer to the node to be deleted and the value to be returned */
	listint_t *node_to_delete;
	int value;

	/* Check if the list is empty */
	if (*head == NULL)
	{
		return (0);
	}

	/* Set the pointer to the node to be deleted and the value to be returned */
	node_to_delete = *head;
	value = node_to_delete->n;

	/* Set the head pointer to the next node */
	*head = (*head)->next;

	/* Free the node to be deleted */
	free(node_to_delete);

	/* Return the value from the node that was deleted */
	return (value);
}

