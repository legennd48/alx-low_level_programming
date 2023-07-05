#include "main.h"

int wildcard_match(char *s1, char *s2);


/**
 * wildcmp - checks 2 strings if they match with wildcard characters
 * @s1: The first string
 * @s2: The second string containing wildcard characters
 * Return: 1 if matched, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}

		if (*s1 != '\0' && wildcard_match(s1, s2 + 1))
		{
			return (1);
		}

		return (wildcmp(s1 + 1, s2));
	}

	if (*s1 == '\0' || *s1 != *s2)
	{
		return (0);
	}

	return (wildcmp(s1 + 1, s2 + 1));
}

/**
 * wildcard_match - Helper function to match a string with a wildcard segment
 * @s1: The first string
 * @s2: The second string with wildcard segment
 * Return: 1 if matched, 0 otherwise
 */

int wildcard_match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == '\0' || *s2 == '\0' || (*s1 != *s2 && *s2 != '?'))
	{
		return (0);
	}

	return (wildcmp(s1 + 1, s2 + 1));
}
