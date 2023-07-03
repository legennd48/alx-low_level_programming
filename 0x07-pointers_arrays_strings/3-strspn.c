#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * consisting only of bytes from accept
 * @s: the string to search
 * @accept: the string containing the accepted bytes
 * Return: the number of bytes in the initial segment of s
 *         consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}

	return (count);
}
