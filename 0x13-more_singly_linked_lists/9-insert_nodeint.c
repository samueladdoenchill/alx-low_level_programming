#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a given position
 * @head: Pointer to the first node of the list
 * @idx: The index at which the new node is inserted
 * @n: The integer to add to the new node
 *
 * Return: Address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev;
	unsigned int i;

	/* allocate memory for new node */
	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	/* initialize new node with the integer value and set next pointer to NULL */
	new_node->n = n;
	new_node->next = NULL;

	/* handle edge case when the list is empty and the desired index is not 0 */
	if (!*head && idx != 0)
		return (NULL);

	/* handle edge case when the desired index is 0 */
	if (idx == 0)
	{
		/* set next pointer of new node to head node and make new node the head */
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* iterate through the list to find the node at the previous index */
	prev = *head;
	for (i = 0; prev && i < idx - 1; i++)
		prev = prev->next;

	/* handle edge case when the desired index is out of range */
	if (!prev)
		return (NULL);

	/* insert the new node into the list */
	new_node->next = prev->next;
	prev->next = new_node;

	/* return the address of the new node */
	return (new_node);
}

