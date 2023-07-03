#include "main.h"

/**
 * _strcht - searches gor a character in string and returns pointer to that character
 * @s: string to be searched
 * @c: character yo be searched for
 * Return: pointer or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0, j;
	char *m = NULL;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		if (s[j] == c)
		{
			m = &s[j];
			return (m);
		}
	}
	if (s[j] == '\0')
	{
		return (NULL);
	}

}
