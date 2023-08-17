#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a linked list
 * @head: head node of the linked list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *temp;

	while (current)
	{
		temp = current->next;
		current->next = NULL, current->prev = NULL;
		free(current);
		current = temp;
	}
}
