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
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	if (*head)
		(*head)->prev = node;
	*head = node;
	return (*head);
}
