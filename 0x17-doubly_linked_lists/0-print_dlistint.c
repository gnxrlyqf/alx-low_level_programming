#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements of a linked list
 * @h: head node to the linked list
 *
 * Return: number of elements
*/

size_t print_dlistint(const dlistint_t *h)
{
	int elements;
	dlistint_t *current = (dlistint_t *)h;

	if (!current)
		return (0);
	while (current)
	{
		printf("%d\n", current->n);
		elements++;
		current = current->next;
	}
	return (elements);
}
