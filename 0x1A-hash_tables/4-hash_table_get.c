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
	hash_node_t *current;

	if (!ht || !key || key[0] == '\0')
		return (NULL);
	index = key_index(key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(key, current->next) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}