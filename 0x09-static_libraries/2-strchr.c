#include "main.h"
#define NULL 0

/**
 * _strchr - searches gor a character in string and returns pointer
 *to that character
 * @s: string to be searched
 * @c: character yo be searched for
 * Return: pointer or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *m = NULL;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}

	if (s[i] == c)
	{
		m = &s[i];
		return (m);
	}
	else
	{
		return (NULL);
	}
}
