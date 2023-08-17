#include "lists.h"
#include <stdlib.h>

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	node->n = n;
	if (!*head)
		return NULL;
	*head = node;
	node->next->prev = node;
	return node;
}
