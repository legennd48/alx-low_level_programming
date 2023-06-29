#include "main.h"

/**
 * string_toupper - converts character string to uppercase
 * @c: character string to be converted
 * Return: pointer to the converted string
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
		i++;
	}

	return (c);
}
