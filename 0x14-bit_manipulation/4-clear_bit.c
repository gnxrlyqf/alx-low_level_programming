#include "main.h"

/**
 * clear_bit - sets a bit to 0
 * @n: pointer to the int
 * @index: index to the bit to change
 *
 * Return: 1 (Success), -1 (Fail)
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
