#include "main.h"

/**
 * print_number - print an integer, without using long, arrays or pointers
 * @n: number to be printed
 */

void print_number(int n)
{
	unsigned int n_positive;

	if (n < 0)
	{
		n_positive = -n;
		_putchar('-');
	} else
	{
		n_positive = n;
	}

	if (n_positive / 10)
		print_number(n_positive / 10);

	_putchar((n_positive % 10) + '0');
}
