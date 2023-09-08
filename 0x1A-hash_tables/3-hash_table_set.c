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
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node = malloc(sizeof(hash_node_t)), *temp;
	char *string;
	int i;

	if (!node)
		return (0);
	if (!ht || !key || !value || key[0] == '\0')
		return (free(node), 0);
	string = strdup(value);
	if (!string)
		return (free(node), 0);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = string;
			return (1);
		}
	}
	node->key = strdup(key);
	if (!(node->key))
		return (free(node), 0);
	node->value = string;
	temp = ht->array[index];
	node->next = temp;
	ht->array[index] = node;
	return (1);
}
