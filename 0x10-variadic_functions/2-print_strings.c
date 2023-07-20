#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints numbers followed by a new line
 * @separator: string that separates each printed string
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list strings;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		if (string == NULL)
			string = "(nil)";

		if (i == (n - 1))
		{
			printf("%s\n", string);
			return;
		}
		if (separator != NULL)
			printf("%s%s", string, separator);
		else
			printf("%s", string);
	}
	va_end(strings);
}
