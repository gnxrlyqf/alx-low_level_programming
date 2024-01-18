#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value in an array using linear search
 * @array: array to search
 * @size: array size
 * @value: value to search for
 *
 * Return: value, -1 if not found
*/

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
