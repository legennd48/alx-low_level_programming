#include "main.h"

/**
 * _put2 - prints every other char in a given string
 * @str: string to be printed
 */

void puts2(char *str)
{
	int lent, i;

	lent = 0;

	while (str[lent] != '\0')
	{
		lent++;
	}
	for (i = 0; i < lent; i = (i + 2))
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
