#include "main.h"
/**
 *times_table - prints the 9th times table starting from 0
 */
void times_table(void)
{
	int mult;
	int row;
	int col;

	for (row = 0; row <= 9; row ++)
	{
		for (col = 0; col < = 9; col++)
		{
			mult = (col * row);

			if (col == 0)
			{
				_putchar('0' + mult);
			}
			else if (mult <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + mult);
			}
			else if (mult > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (mult / 10));
				_putchar('0' + (mult % 10));
			}
		}
		_putchar('\n');
	}
}
