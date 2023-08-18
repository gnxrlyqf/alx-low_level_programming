#include "lists.h"

/**
 * sum_dlistint - calculates the sum of the data in the linked list
 * @head: head node of the linked list
 *
 * Return: sum, or 0 if it's empty
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (!current)
		return (0);
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
