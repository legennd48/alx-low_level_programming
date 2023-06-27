#include "main.h"

/**
 *_strcpr - opies the string pointed to by src, including the terminating
 *null byte (\0), to the buffer pointed to by dest.
 *@dest: where string will be copied to
 *@scr: where we are copying from
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, n;

	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
