#include "main.h"

/**
 *print_square - printa an n x n square
 *@size: the integer that determines the size of the square
 */

void print_square(int size)
{
	if (size > 0)
	{
		int n;

		n = 1;
		while (n <= size)
		{
			for (n = 1; n <= size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
			n++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
