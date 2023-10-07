#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr, *tmp;

	if (!ht)
	return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			while (curr)
			{
				tmp = curr;
				curr = curr->next;
				if (tmp->key)
					free(tmp->key);
				if (tmp->key)
					free(tmp->value);
				free(tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
