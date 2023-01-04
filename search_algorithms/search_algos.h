#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>
#include <stdbool.h>
int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
#endif
