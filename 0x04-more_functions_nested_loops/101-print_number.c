#include "main.h"

/**
 *print_number -prints an integer. using _putchar
 *@n: integer to be printed
 */

void print_number(int n)
{
	unsigned int digs, tens, absolute_n, control;

	absolute_n = n;
	control = 1;
	if (n > 0 || n < 0)
	{
		if (n < 0)
		{
			absolute_n = (n * -1);
			_putchar('-');
		}

		while (control <= absolute_n)
			control = (control * 10);
		tens = (control / 10);

		while (tens >= 1)
		{
			digs = (absolute_n / tens);
			_putchar(digs + '0');
			absolute_n = (absolute_n - (tens * digs));
			tens = (tens / 10);
		}
	}
	else
	{
		_putchar ('0');
	}
}
