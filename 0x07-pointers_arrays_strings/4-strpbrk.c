#include "main.h"

/**
*_strpbrk - locates the first occurrence in the string s of any of the bytes in
*the string accept
*@s: string to be searched
*@accept: bytes to be searched for
*Return: NULL or pointer to first of accept found
*/


char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *m = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				m = &s[i];
				return (m);
			}
		}
	}
	return (NULL);
}
