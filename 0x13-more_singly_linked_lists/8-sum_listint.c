#include "lists.h"

/**
 * sum_listint - finds the sum of all integers in a linked list
 * @head: The list which contains the data to find the sum
 *
 * Return: The sum of all data
 */
int sum_listint(listint_t *head)
{
	int total = 0; /* variable to store the total sum */
	listint_t *current; /* pointer to traverse the list */

	/* check if head is NULL */
	if (head == NULL)
		return (0);

	/* traverse the list */
	for (current = head; current != NULL; current = current->next)
	{
		total += current->n; /* add the current node's value to the total */
	}

	return (total);
}

