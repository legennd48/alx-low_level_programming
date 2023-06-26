#include "main.h"

/**
*rev_string - reverses a string without std libs
*@s: string to be reversed
*/

void rev_string(char *s)
{
	int lent = 0, i;
	char temp[1000];
        char *x = temp;

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
		*(x + i) = *(s - i);
	}
	*s = *x;
}
