#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <unistd.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int actual_binary_search(int *array, int start, int end, int value);

#endif
