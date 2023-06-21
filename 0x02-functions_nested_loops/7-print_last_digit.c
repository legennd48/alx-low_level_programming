#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be examined.
 * Return: 0
 */

int print_last_digit(int n)
{
	int m = (n % 10);

	_putchar('0' + m);
	return (m);
}

