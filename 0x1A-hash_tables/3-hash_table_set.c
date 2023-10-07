#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds a key:value pair to the hash table
 * @ht: hash table to add the pair to
 * @key: key to add
 * @value: value to add
 *
 * Return: 1 (Success), 0 (Failure)
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node, *temp;
	char *str;
	int i;

	str = strdup(value);
	if (!ht || !key || !value || key[0] == '\0' || !str)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = str;
			return (1);
		}
	}
	hash_node = malloc(sizeof(hash_node_t));
	if (!hash_node)
		return (free(str), 0);
	hash_node->key = strdup(key);
	if (!(hash_node->key))
		return (free(hash_node), 0);
	hash_node->value = str;
	temp = ht->array[index];
	hash_node->next = temp;
	ht->array[index] = hash_node;
	return (1);
}
