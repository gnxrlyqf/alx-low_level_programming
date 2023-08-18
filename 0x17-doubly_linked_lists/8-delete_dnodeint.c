#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes indexed node
 * @head: pointer to pointer to head node
 * @index: indexed node to delete
 *
 * Return: 1 (Success), -1 (Failure)
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *current, *prev;
	unsigned int i;

	if (!(*head))
		return (-1);
	if (index == 0 && (*head))
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;
	while (current && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (!current)
		return (-1);
	temp = current;
	prev->next = current->next;
	current->next->prev = prev;
	free(temp);
	return (1);
}
