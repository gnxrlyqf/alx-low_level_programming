#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return NULL;
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	if(*head)
		(*head)->prev = node;
	*head = node;
	return *head;
}
