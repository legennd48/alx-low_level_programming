#include <stddef.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - rreturns a ponter a string copied via DMA from an existing string
 * @str: string to be copied
 * Return: NULL is str is NULL or allocation fails, pointer to copy otherwise
 */

char *_strdup(char *str)
{
	int i = 0;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + i) != '\0')
	{
		i++;
	}

	copy = (char *) malloc((i + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; *(str + i) != '\0'; i++)
	{
		*(copy + i) = *(str + i);
	}
	*(copy + i) = '\0';
	return (copy);
}
