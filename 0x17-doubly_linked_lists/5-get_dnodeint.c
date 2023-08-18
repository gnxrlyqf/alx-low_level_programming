#include "lists.h"

/**
 * get_dnodeint_at_index - retrieves the indexed node
 * @head: pointer to the head node of the linked list
 * @index: index to retrieve
 *
 * Return: indexed node, or NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	current = head;
	while (current && i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}
