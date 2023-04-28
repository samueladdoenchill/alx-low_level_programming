#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees a linked list
* @head: pointer to the head of the list
*
* This function frees all the memory allocated for the linked list
* starting from the head node.
*
* Return: None
*/
void free_list(list_t *head)
{
list_t *temp;

/* Traverse the list and free each node */
while (head != NULL)
{
/* Save the next node in a temporary variable */
temp = head->next;

/* Free the string data of the current node */
if (head->str != NULL)
{
free(head->str);
}

/* Free the current node */
free(head);

/* Move the head pointer to the next node */
head = temp;
}
}

