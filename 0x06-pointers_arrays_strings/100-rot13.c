#include "main.h"

/**
 *rot13 - encode string usint rot13
 *@s: - string to be encoded
 *Return: s
 */

char *rot13(char *s)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*s != '\0')
	{
		if ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z'))
		{
			for (i = 0; i < 52; i++)
			{
				if (*s == alpha[i])
				{
					*s = rot[i];
					break;
				}
			}
		}
		s++;
	}

	return (s);
}
