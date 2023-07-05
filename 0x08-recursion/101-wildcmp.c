#include "main.h"
/**
 * wildcmp - checks a string against another which contains wildcards to see if
 * they can be considered equal
 * otherwise return 0.
 * @s1: string to be checked
 * @s2: string containing wildcard
 * Return: 1 if similar 0 otherwisw
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0')
	{
		if (*s1 == '\0')
			return wildcmp(s1, s2 + 1);
		else
			return wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1);
	}

	if (*s1 == '\0' && *s2 == '\0')
		return 1;

	if (*s1 == *s2 || *s2 == '?')
		return wildcmp(s1 + 1, s2 + 1);

	return 0;
}

