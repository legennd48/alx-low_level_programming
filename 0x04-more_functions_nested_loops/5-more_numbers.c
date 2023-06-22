#include "main.h"

/**
 *more_numbers - prints 10x the numbers from 0-14
 */

void more_numbers(void)
{
	int m, n, d1, d2;

	for (m = 1; m <= 10; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			d1 = n / 10;
			d2 = n % 10;

			if (d1 > 0)
			{
				_putchar('0' + d1);
			}
			_putchar('0' + d2);
		}
		_putchar('\n');
	}
}
