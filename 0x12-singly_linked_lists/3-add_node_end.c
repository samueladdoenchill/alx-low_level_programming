#include "lists.h"

/**
* add_node_end - Adds a new node at the end of a list_t list
* @head: Pointer to pointer to the head of the list_t list
* @str: The string to be duplicated and stored in the new node
*
* Return: The address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
/* Declare and initialize variables */
list_t *new_node, *temp_node = *head;
unsigned int len = 0;

/* Get the length of the string */
while (str[len])
len++;

/* Allocate memory for the new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

/* Set the new node's values */
new_node->str = strdup(str);
new_node->len = len;
new_node->next = NULL;

/* If the list is empty, make the new node the head */
if (*head == NULL)
{
*head = new_node;
return (new_node);
}

/* Traverse to the end of the list */
while (temp_node->next != NULL)
temp_node = temp_node->next;

/* Add the new node to the end of the list */
temp_node->next = new_node;

/* Return the address of the new node */
return (new_node);
}

