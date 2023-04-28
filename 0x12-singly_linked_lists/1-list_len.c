#include "lists.h"

/**
* list_len - Returns the number of elements in a linked list.
*
* @h: Pointer to the list_t list.
*
* Return: Number of elements present in h.
*/
size_t list_len(const list_t *h)
{
size_t number_of_elements = 0;

/* Traverse the linked list and count the number of elements. */
while (h != NULL)
{
/* Increment the number of elements */
number_of_elements++;

/* Move to the next element */
h = h->next;
}

/* Return the total number of elements */
return (number_of_elements);
}

