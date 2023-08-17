#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *current;
	node->n = n;
	node->prev = NULL;
	if(!node)
		return (NULL);
	if(!*head)
	{
		node->next = NULL;
		*head = node;
	}
	current = *head;
	while(current)
	{
		if(!current->next)
		{
			node->prev = current;
			current->next = node;
			node->next = NULL;
		}
		current = current->next;
	}
	return node;
}