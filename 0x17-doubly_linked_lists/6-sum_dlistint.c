#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Calculates sum of all data in dlistint_t linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The sum of all data values in the linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int total_sum = 0;

	while (head != NULL)
	{
		total_sum += head->n;
		head = head->next;
	}
	return (total_sum);
}
