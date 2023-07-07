#include "main.h"

/**
 *_memset - fills memory with a constant byte.
 *@s: memory area to be filled
 *@b: the constant byte used for filling
 *@n: the number of times it will be filled
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
