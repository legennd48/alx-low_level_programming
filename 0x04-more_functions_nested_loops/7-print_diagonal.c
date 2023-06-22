#include "main.h"

/**
 *print_diagonal - print a \ n number of times
 *@n: number of tims \ is to be printed
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int di, space;

		for (di = 1; di <= n; di++)
		{
			for (space = 1; space < di; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
