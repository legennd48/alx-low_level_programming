#include "main.h"

/**
 * get_bit - returns the value of bit at given index
 * @index: index of bit to be returned
 * @n: number to be searched for index
 * Return: value at index or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > MAXBITS)
		return (-1);
	value = ((n >> index) & 1);

	return (value);
}
