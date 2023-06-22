#include "main.h"

/**
 *print_line - print a line n number of times
 *@n: number of times line is to be printed.
 */

void print_line(int n)
{
	int control = 0;

	while (n > control)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
