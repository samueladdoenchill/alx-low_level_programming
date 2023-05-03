#include "lists.h"

/**
 * free_listint_safe - Safely frees a listint_t list by
 * checking for a circular list.
 * @h: A pointer to a pointer to the first node in the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *temp;

	/* Check if h pointer is NULL */
	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		/* Move to the next node */
		temp = current->next;

		/* Check if current node is the same as the h node */
		if (current == *h)
		{
			/* Set the h pointer to the next node */
			*h = temp;
			free(current);
			current = NULL;
			break;
		}
		/* Check if the current node is less than or equal to the next node */
		if (current <= temp)
		{
			free(current);
			current = NULL;
			break;
		}

		/* Free the current node */
		free(current);

		/* Move to the next node */
		current = temp;
	}

	/* Return the count of nodes freed */
	return (count);
}

