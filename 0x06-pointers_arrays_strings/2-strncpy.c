#include "main.h"

/**
 * _strncpy - copies a string from src to dest
 * @n: number of bytes to be copied
 * @dest: where string wiol be copied to
 * @src: source string
 * Return: dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}

	return (dest);
}
