#include "main.h"
/**
*_strncat - concatenates dest string with n number of src string
*@dest: destination string where the final results will be
*@src: source sting to be used to append dest
*@n: number of characters to be used from src
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
