#include "main.h"

/**
*reverse_array - reverses an aray of n integers
*@a: internet array to be reversed
*@n: size of integer array
*/

void reverse_array(int *a, int n)
{
	int i, j;
	int b[n];

	i = n - 1;
	j = 0;
	for (; i >= 0; i--)
	{
		b[i] = a[j];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
	}
}
