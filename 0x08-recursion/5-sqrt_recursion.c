#include "main.h"

int real_root(int a, int b);

/**
 * _sqrt_recursion - finds the square root of an int
 * @n: numbers whose sqrt to find.
 * Return: sqrt or -1 if no natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (real_root(n, 0));
}

/**
 * real_root - checks and finds the sqrt of numbers
 * @a: number to be checked
 * @b: initial guess
 * Return: sqrt or -1 if no natural sqrt
 */

int real_root(int a, int b)
{
	if ((b * b) > a)
	{
		return (-1);
	}
	if (b * b == a)
	{
		return (b);
	}
	return (real_root(a, b + 1));
}
