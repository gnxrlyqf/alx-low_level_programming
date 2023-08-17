#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a linked list
 * @head: head node of the linked list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL, *temp;

	current = head;
	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	head = NULL;
}
