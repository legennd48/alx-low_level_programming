#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_c - prints char type
 * @arg: va_list variable
 */

void print_c(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_i - prints int type
 * @arg: va_list variable
 */

void print_i(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_f - prints float type
 * @arg: va_list variable
 */
void print_f(va_list arg)
{
	printf("%f", va_arg(arg, float));
}

/**
 * print_string - prints string type
 * @arg: va_list variable
 */

void print_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints args based on specified format
 * @format: specified print format
 */

void print_all(const char *const format, ...)
{
	char *delim = "";
	va_list arg;
	int i, j;

	form id[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_string},
		{NULL, NULL}
	};

	va_start(arg, format);

	i = 0;
	while (format != NULL && format[i] != NULL)
	{
		j = 0;
		while (id[j].type != NULL)
		{
			if (id[j].type == format[i])
			{
				printf("%s", delim);
				id[j].func(arg);
				delim = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(arg);
	printf("\n");
}
