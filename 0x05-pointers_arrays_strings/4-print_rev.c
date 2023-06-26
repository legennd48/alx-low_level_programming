#include "main.h"

/**
*print_rev - prints a string in reverse without std libs
*@s: string to be printed
*/

void print_rev(char *s)
{
	int lent = 0, i;

	while (*s != '\0')
	{
		s++;
		lent++;
	}

	if (*s == '\0')
	{
		s--;
		lent--;
	}

	for (i = lent; i >= 0; i--)
	{
		_putchar(*s);
		s--;
		lent--;
	}

	_putchar('\n');
}
