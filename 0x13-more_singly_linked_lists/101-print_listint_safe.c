#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 *
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	/* Initialize variables */
	size_t count = 0;
	const listint_t *current, *next;

	/* Check if head is null */
	if (head == NULL)
		exit(98);

	/* Traverse through the linked list */
	current = head;
	while (current != NULL)
	{
		/* Get the next node and increment the counter */
		next = current->next;
		count++;

		/* Print the current node */
		printf("[%p] %d\n", (void *)current, current->n);

		/* Check for loop */
		if (next >= current)
		{
			/* Print the nodes in the loop and return */
			printf("-> [%p] %d\n", (void *)next, next->n);
			printf("-> [%p] %d\n", (void *)next->next, next->next->n);
			printf("Linked list loop detected, %lu elements ignored\n", count);
			return (count);
		}

		/* Move to the next node */
		current = next;
	}

	/* Return the number of nodes in the list */
	return (count);
}

