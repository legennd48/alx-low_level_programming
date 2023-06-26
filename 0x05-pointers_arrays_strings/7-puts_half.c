#include "main.h"

/**
 *puts_half - prints the later half of a string
 *@str: string whose half is to be printed
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
		for (i = lent / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (lent % 2)
	{
		for (n = (lent - 1) / 2 + 1; n < lent; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
