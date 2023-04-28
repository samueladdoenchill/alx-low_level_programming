#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a list_t list
* @head: A pointer to a pointer to the head of the list_t list
* @str: The string to be stored in the new node
*
* Return: The address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
/* Declare variables */
list_t *new_node;
unsigned int len = 0;

/* Allocate memory for the new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

/* Copy the string and find its length */
new_node->str = strdup(str);
while (str[len])
len++;
new_node->len = len;

/* Set the next node to be the current head of the list */
new_node->next = *head;

/* Set the head of the list to be the new node */
*head = new_node;

/* Return the new node */
return (new_node);
}

