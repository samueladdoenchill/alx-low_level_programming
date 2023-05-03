#include "lists.h"

/**
 * add_nodeint_end - Function adds a new node at the end of a listint_t.
 * @head: Pointer to the first node of the list.
 * @n: The data to insert at that new node.
 *
 * Return: The address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	/* Allocate memory for new node */
	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Assign data and set next to NULL */
	new_node->n = n;
	new_node->next = NULL;

	temp = *head;

	/* If list is empty, make new node the first node */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse to the end of the list */
	while (temp->next != NULL)
		temp = temp->next;

	/* Insert new node at the end */
	temp->next = new_node;

	return (new_node);
}

