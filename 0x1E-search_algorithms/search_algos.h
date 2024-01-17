#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>
#include <math.h>

/* prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
/* helpers */
void printArray(int *array, size_t lo, size_t hi);
int min(int a, int b);
int bin_search(int *array, int value, size_t lo, size_t hi);
#endif /* search_algos */
