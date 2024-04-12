#ifndef SEARCH_ALGO_H
#define SEARCH_ALGO_H
#include <stdio.h>
#include <stddef.h>
int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t left, size_t right);
int binary_search(int *array, size_t size, int value);
#endif
