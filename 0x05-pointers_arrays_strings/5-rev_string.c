#include "main.h"

/**
 * rev_string - reverses a string without std libs
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int lent = 0, i;
	char temp;

	while (s[lent] != '\0')
	{
		lent++;
	}

	for (i = 0; i < lent / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
