#include "main.h"

/**
*reverse_array - reverses an aray of n integers
*@a: internet array to be reversed
*@n: size of integer array
*/

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = temp;
	}
}
