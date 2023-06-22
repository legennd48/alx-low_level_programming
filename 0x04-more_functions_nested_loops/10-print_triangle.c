#include "main.h"

/**
 *print_triangle - prints a triangle, followed by a new line.
 *@size: the integer that determines the size of the tianagle to be printed
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int h, b, hash;

		for (h = 1; h <= size; h++)
		{
			for (b = 1; b <= (size - h); b++)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= h; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
