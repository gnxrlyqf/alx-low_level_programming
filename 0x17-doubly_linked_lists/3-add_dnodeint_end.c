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

	if (!node)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->prev = NULL;
	if (!*head)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	current = *head;
	while (current->next)
	{
		current = current->next;
	}
	node->prev = current;
	current->next = node;
	return (node);
}
