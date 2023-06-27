#include "main.h"
#include <stdio.h>

/**
 *print_array - prints the n elements of an array of integers followed
 *a be new line
 *@a: array to be printed from
 *@n: number of elemnts to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		if (i == 0)
		{
			printf("%d, ", a[i]);
		}
		else if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}
