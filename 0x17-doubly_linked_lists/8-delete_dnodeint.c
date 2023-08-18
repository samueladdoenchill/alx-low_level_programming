#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a specific index
 *                            in a dlistint_t linked list.
 * @head: A pointer to a pointer to the head node of the linked list.
 * @index: The index of the node to be deleted. Indexing starts from 0.
 *
 * Return: 1 if the deletion is successful, -1 if it fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	size_t list_size = 0;

	if (!*head)
	{
		return (-1);
	}
	while (current_node)
	{
		list_size++;
		current_node = current_node->next;
	}
	if (list_size < index + 1)
	{
		return (-1);
	}
	current_node = *head;
	if (!index)
	{
		*head = current_node->next;
		if (current_node->next)
		{
			current_node->next->prev = NULL;
		}
		current_node->next = NULL;
		free(current_node);
		return (1);
	}
	while (index--)
	{
		current_node = current_node->next;
	}
	current_node->prev->next = current_node->next;
	if (current_node->next)
	{
		current_node->next->prev = current_node->prev;
	}
	free(current_node);
	return (1);
}
