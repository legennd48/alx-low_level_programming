#include "main.h"

/**
 *swap_int - swaps the value of 2 integers
 *@a: first integer to be swapped
 *@b: second intefge to be swapped
 */

void swap_int(int *a, int *b)
{
	*a ^= *b; /* combine bits od *a and *b */
	*b ^= *a; /* Undoes XOR operation to retrieve original value of *a value*/
	*a ^= *b; /* undoes XOR operation to retireve original value of *b value */
}
