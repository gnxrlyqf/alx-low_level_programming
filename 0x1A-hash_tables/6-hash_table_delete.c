#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *temp;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			while (current)
			{
				temp = current;
				current = current->next;
				if (temp->key)
					free(temp->key);
				if (temp->key)
					free(temp->value);
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
