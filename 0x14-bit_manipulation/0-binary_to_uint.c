#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary expression to base10
 * @b: binary string
 *
 * Return: converted int, or 0 if a char isn't either 1 or 0
 **/

unsigned int binary_to_uint(const char *b)
{
	int index = strlen(b) - 1;
	int p = 0;
	int curr, i, result = 0;

	for (i = index; i >= 0; i--)
	{
		curr = b[i] - '0';
		if (curr != 0 && curr != 1)
			return (0);
		result = result + (curr * power(2, p));
		p++;
	}
	return (result);
}

/**
 * power - calculates a power
 * @a: base
 * @b: power
 *
 * Return: result
 **/

int power(int a, int b)
{
	int i, result = 1;

	for (i = 0; i < b; i++)
	{
		result = result * a;
	}

	return (result);
}