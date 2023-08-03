#include "main.h"

/**
 * set_bit - sets the value of a bit at given index to 1
 * @index: index where value is to be set
 * @n: target number
 * Return: 1 on success, -1 on faliure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int control = 1;

	if (index > MAXBITS)
		return (-1);
	control <<= index;
	*n = (*n | control);

	return (1);
}
