#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diagonals in matrix
 * @matrix: matrix represented as an array
 * @size: size of matrix
 */

void print_diagsums(int *matrix, int size)
{
	int diagsum1 = 0;
	int diagsum2 = 0;
	int row, index;

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
