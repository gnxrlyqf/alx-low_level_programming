#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for an element using binary search algorithm
 * @array: array to search
 * @size: array size
 * @value: value to search for
 *
 * Return: value, or -1 if not found
*/

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (actual_binary_search(array, 0, size - 1, value));
}

/**
 * actual_binary_search - recursive function for binary search
 * @array: sub array to search
 * @start: starting index
 * @end: ending index
 * @value: value to find
 *
 * Return: value, or -1 if not found
*/

int actual_binary_search(int *array, int start, int end, int value)
{
	int iter = (start + end) / 2;
	int i;

	if (start > end)
		return (-1);
	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	if (array[iter] == value)
		return (iter);
	if (array[iter] > value)
		return (actual_binary_search(array, start, iter - 1, value));
	if (array[iter] < value)
		return (actual_binary_search(array, iter + 1, end, value));
	return (-1);
}
