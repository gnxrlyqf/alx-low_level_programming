#include "main.h"

/**
 * binary_to_uint - converts a binary expression to base10
 * @b: binary string
 *
 * Return: converted int, or 0 if a char isn't either 1 or 0
 **/

unsigned int binary_to_uint(const char *b)
{
	int i, result = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		result <<= 1;
		if (b[i] == '1')
			result += 1;
	}
	return (result);
}
