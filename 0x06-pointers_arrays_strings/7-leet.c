#include "main.h"

/**
 * leet - encode string into 1337 leet
 * @str: string to be encoded
 * Return: encoded string
 */
char *leet(char *str)
{
	int original[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int leet[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; original[j] != '\0'; j++)
		{
			if (str[i] == original[j])
			{
				str[i] = leet[j];
			}
		}
	}
	return (str);
}
