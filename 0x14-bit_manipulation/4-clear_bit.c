#include "main.h"

/**
 * clear_bit - sets the value at a given index to 0
 * @n: pointer to the target number
 * @index: index of bit to be set
 * Return: 1 on success, -1 on falure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int control = 1;

	if (index > MAXBITS)
		return (-1);
	control = ~(control << index);
	*n = (*n & control);

	return (1);
}
