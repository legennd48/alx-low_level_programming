#include <stddef.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - cincatenated 2 strings and stores in a new DMA'd string
 * @s1: first string
 * @s2: second string
 * Return: Null ot pointer to nrw string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, n;
	char *copycat;

	while (*(s1 + i) != '\0')
	{
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
	}

	copycat = (char *) malloc((i + j + 1) * sizeof(char));
	if (copycat == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < i; n++)
	{
		*(copycat + n) = *(s1 + n);
	}
	for (n = 0; n < j; n++)
	{
		*(copycat + i) = *(s2 + n);
		i++;
	}
	*(copycat + i) = '\0';

	return (copycat);
}
