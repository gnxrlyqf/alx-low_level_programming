#include "lists.h"

/**
 * dlistint_len - counts the size of the linked list
 * @h: head node to the linked list
 *
 * Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	int elements;
	dlistint_t *current = (dlistint_t *)h;

	if (!current)
		return (0);
	while (current)
	{
		elements++;
		current = current->next;
	}
	return (elements);
}
