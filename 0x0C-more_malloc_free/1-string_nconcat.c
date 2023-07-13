#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenes all of string and n bytes of second string
 * to a new dynamically allocated pointer
 * @s2: second string
 * @s1: first string
 * @n: number of bytes to be copied from second string
 * Return: Null or pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n >= j)
		new = malloc(sizeof(char) * (j + i + 1));
	else
		new = malloc(sizeof(char) * (i + n + 1));
	if (new == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		new[k] = s1[k];
	if (n < j)
		for (k = 0; k < n; k++)
		{
			new[i] = s2[k];
			i++;
		}
	else
	{
		k = 0;
		for (k = 0; s2[k] != '\0'; k++)
		{
			new[i] = s2[k];
			i++;
		}
	}
	new[i] = '\0';
	return (new);
}
