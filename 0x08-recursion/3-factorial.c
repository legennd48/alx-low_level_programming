#include "main.h"

/**
 * factorial - finds factorial of a number
 * @n: target number
 * Return: result
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
