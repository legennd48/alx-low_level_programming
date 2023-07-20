#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string that separates each printed number
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list list;

	if (n == 0)
		return;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);

		if (i == (n - 1))
		{
			printf("%d\n", num);
			return;
		}
		if (separator != NULL)
			printf("%d%s", num, separator);
		else
			printf("%d", num);
	}
	va_end(list);
}
