#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num = 0;
	unsigned long int curr;
	unsigned long int flipped = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = flipped >> i;
		if (curr & 1)
			num++;
	}

	return (num);
}
