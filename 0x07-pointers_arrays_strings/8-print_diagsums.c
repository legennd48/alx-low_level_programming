#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diagonals in matrix
 * @matrix: matrix represented as an array
 * @size: size of matrix
 */

void print_diagsums(int *matrix, int size)
{
	nt diagsum1 = 0;
	nt diagsum2 = 0;
	nt row, index;

	for (row = 0; row < size; row++)
	{
		index = (row * size) + row;
		diagsum1 += matrix[index];
	}

	for (row = 1; row <= size; row++)
	{
		index = (row * size) - row;
		diagsum2 += matrix[index];
	}

	printf("%d, %d\n", diagsum1, diagsum2);
}
