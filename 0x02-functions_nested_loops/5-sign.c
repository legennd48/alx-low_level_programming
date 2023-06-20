#include "main.h"

/**
 * print_sign - checks n and prints a sign depending on the value of n.
 * @n: the number to be checked
 * Return: 0 if n is zero, 1 if positive and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
		_putchar('\n');
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

