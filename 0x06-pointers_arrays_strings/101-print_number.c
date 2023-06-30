#include "main.h"

/**
 *print_number - print an integer, without using long, arrays or pointers
 *@num: number to be printed
 */

void print_number(int n)
{
	int divisor = 1;
	int digit;
	int positive = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		positive = -n;
	}

	while (positive / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor != 0)
	{
		digit = (positive / divisor) % 10;
		_putchar('0' + digit);
		divisor /= 10;
	}
}
