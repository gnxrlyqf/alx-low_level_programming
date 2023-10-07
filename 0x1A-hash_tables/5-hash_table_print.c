#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a has table
 * @ht: hash table to print
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int i;
	unsigned char sep = 0;

	if (!ht)
	return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (sep == 1)
				printf(", ");

			curr = ht->array[i];
			while (curr)
			{
				printf("'%s': '%s'", curr->key, curr->value);
				curr = curr->next;
			}
			sep = 1;
		}
	}
	printf("}\n");
}
