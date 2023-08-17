#include "lists.h"
#include <stdlib.h>


/**
 * add_dnodeint_end - adds a node at the end of a linked list
 * @head: pointer to a pointer to the head node
 * @n: data of the node to add
 *
 * Return: created node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *current;

	node->n = n;
	node->prev = NULL;
	if (!node)
	{
		free(node);
		return (NULL);
	}
	if (!*head)
	{
		node->next = NULL;
		*head = node;
	}
	current = *head;
	while (current)
	{
		if (!current->next)
		{
			node->prev = current;
			current->next = node;
			node->next = NULL;
		}
		current = current->next;
	}
	return (node);
}
