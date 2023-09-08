#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a has table
 * @ht: hash table to print
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	unsigned char comma = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (comma == 1)
				printf(", ");

			current = ht->array[i];
			while (current)
			{
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
			}
			comma = 1;
		}
	}
	printf("}\n");
}
