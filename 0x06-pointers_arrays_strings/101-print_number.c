#include "main.h"

/**
 *print_number - print an integer, without using long, arrays or pointers
 *@n: number to be printed
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

	while (divisor <= positive / 10)
	{
		divisor *= 10;
	}

	while (divisor != 0)
	{
		digit = positive / divisor;
		_putchar('0' + digit);
		positive %= divisor;
		divisor /= 10;
	}
}