#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves the value associated with a key in the hash table
 * @ht: hash table
 * @key: key to find
 *
 * Return: the value, or NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *curr;

	if (!ht || !key || key[0] == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	curr = ht->array[index];
	while (curr)
	{
		if (strcmp(key, curr->key) == 0)
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}
