#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - retrieves the indexed node
 * @head: pointer to the head node of the linked list
 * @index: index to retrieve
 *
 * Return: indexed node, or NULL
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *prev, *node = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if(!node || !(*h))
		return(NULL);
	node->n = n;

	if (idx == 0)
	{
		node->prev = NULL;
		node->next = *h;
		if(*h)
			(*h)->prev = node;
		*h = node;
		return (*h);
	}
	current = *h;
	while (current && i < idx)
	{
		prev = current;
		current = current->next;
		i++;
	}
	prev->next = node;
	node->prev = prev;
	node->next = current;
	current->prev = node;
	return (node);
}
