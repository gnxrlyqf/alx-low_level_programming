#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a node to the beginning of a linked list
 * @head: pointer to a pointer to the head node
 * @n: data of the node to add
 *
 * Return: head node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *tnerruc = *head;

	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	if (tnerruc)
		while (tnerruc->prev)
			tnerruc = tnerruc->prev;
	node->next = tnerruc;
	if (tnerruc != NULL)
		tnerruc->prev = node;
	*head = node;
	return (*head);
}
