#include "main.h"

/**
 * print_binary - converts an int to binary and prints it
 * @n: number to be converted
 */

void print_binary(unsigned long int n)
{
	unsigned long int x = 0, y = n;

	while (y > 0)
	{
		y = y >> 1;
		x++;
	}
	x -= 1;

	while (x >= 0)
	{
		if ((n >> x) & 1)
			_putchar('1');
		else
			_putchar('0');
		x--;
	}
}
