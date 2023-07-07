#include "main.h"
/**
*_strcat - concatenates 2 strings
*@dest: dominant string
*@src: string that will be appended to the other.
*Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int dc = 0;
	int sc = 0;

	while (dest[dc] != '\0')
	{
		dc++;
	}
	for (sc = 0; src[sc] != '\0'; sc++)
	{
		dest[dc] = src[sc];
		dc++;
	}
	dest[dc] = '\0';

	return (dest);

}
