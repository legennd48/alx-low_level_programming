#include "main.h"

/**
 *_memcpy - copies n bytes from src memory area to dest memory area
 *@dest: destination to be copied to
 *@src: source of bytes to be copied
 *@n: number of bytes to be copied
 *Return: dest (modified)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (dest[i] != '\0' && src[i] != '\0')
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
