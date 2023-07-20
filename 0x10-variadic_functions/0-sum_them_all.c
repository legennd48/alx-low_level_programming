#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: 0 or sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list par;

	if (n == 0)
	{
		return (0);
	}

	va_start(par, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(par, int);
	}

	return (sum);
}
