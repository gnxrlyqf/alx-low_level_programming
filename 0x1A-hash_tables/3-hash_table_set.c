#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds a key:value pair to the hash table
 * @key: key to add
 * @value: value to add
 *
 * Return: 1 (Success), 0 (Failure)
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node = malloc(sizeof(hash_node_t));
	hash_node_t *temp;

	if (!ht)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);

	temp = ht->array[index];
	node->next = temp;
	ht->array[index] = node;
	return (1);
}
