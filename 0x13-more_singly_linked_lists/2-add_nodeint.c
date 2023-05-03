#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Pointer to a pointer to the head node of the list
 * @n: Value to be assigned to the new node
 *
 * Return: Address of the new element on success, NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /* Declare a pointer to the new node */

	new_node = malloc(sizeof(listint_t)); /* Allocate memory for new node */
	if (new_node == NULL) /* If malloc fails */
		return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = *head;

	*head = new_node; /* Make the new node the head of the list */

	return (new_node);
}
