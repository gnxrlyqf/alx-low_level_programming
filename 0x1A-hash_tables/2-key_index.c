#include "hash_tables.h"

/**
 * key_index - calculates the index in which the key will be placed
 * @key: string to process
 * @size: size of the array
 *
 * Return: array index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
