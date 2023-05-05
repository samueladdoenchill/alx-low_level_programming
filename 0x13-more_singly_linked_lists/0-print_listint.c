#include "lists.h"

/**
 * print_listint - This function prints all the elements of
 * a linked list of type listint_t.
 * @h: The pointer to the head of the linked list to be printed.
 * Return: The number of nodes in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)  /* check if the list is empty */
		return (count);

	/* print the first element */
	printf("%d\n", h->n);
	count++;

	/* print the rest of the list */
	while (h->next != NULL)
	{
		h = h->next;
		printf("%d\n", h->n);
		count++;
	}

	return (count);
}

