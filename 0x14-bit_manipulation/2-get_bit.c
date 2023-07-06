#include "main.h"

/**
 * get_bit - returns the bit at a given index
 * @n: int to process
 * @index: index of bit
 *
 * Return: bit at the index, or -1 if there's an error
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	n >>= index;
	return (n & 1);
}
