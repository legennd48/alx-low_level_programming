#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one given number to another.
 * @n: firt number (starting point)
 * @m: second number (destination)
 * Return: Number of bits necessary for flipping
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int num_bits = 0;

	diff = n ^ m;

	do {
		num_bits += (diff & 1);
		diff >>= 1;
	} while (diff > 0);

	return (num_bits);
}
