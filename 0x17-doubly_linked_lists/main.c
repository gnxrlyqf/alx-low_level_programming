#include "lists.h"

int main()
{
	dlistint_t *head = NULL;

	add_dnodeint(&head, 1);
	add_dnodeint(&head, 98);
	add_dnodeint(&head, 0);
	add_dnodeint(&head, 13);
	add_dnodeint(&head, 7);
	add_dnodeint(&head, 5);
	add_dnodeint(&head, 2);
	print_dlistint(head);
}