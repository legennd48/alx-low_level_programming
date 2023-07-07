#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to find
 *
 * Return: pointer to the beginning substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int j, k;
	char *m = NULL;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (j = 0; haystack[j] != '\0'; j++)
	{
		if (haystack[j] == needle[0])
		{
			for (k = 0; needle[k] != '\0'; k++)
			{
				if (haystack[j + k] != needle[k])
				{
					break;
				}
			}

			if (needle[k] == '\0')
			{
				m = &haystack[j];
				return (m);
			}
		}
	}

	return (NULL);
}
