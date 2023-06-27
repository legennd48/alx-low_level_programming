#include "main.h"

/**
 * puts_half - prints the latter half of a string
 * @str: string whose half is to be printed
 */

void puts_half(char *str)
{
	int lent, j, k;

	lent = 0;

	while (str[lent] != '\0')
	{
		lent++;
	}

	if (lent % 2 == 0)
	{
		for (j = lent / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else if (lent % 2)
	{
		for (k = (lent + 1) / 2; k < lent; k++)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
