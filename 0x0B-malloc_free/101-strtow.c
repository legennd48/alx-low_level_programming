#include <stdlib.h>
#include "main.h"

/**
 * strtow - split a string into words
 * and store them in an array of strings
 * @str: string to be split
 * Return: pointer to the array of strings or NULL on failure
 */
char **strtow(char *str)
{
	int wcount, i, j, pos;
	char **words;

	if (str == NULL || str[0] == '\0' || str == "")
		return (NULL);
	wcount = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			wcount++;
	}
	words = malloc(sizeof(char *) * (wcount + 1));
	if (words == NULL)
		return (NULL);
	pos = 0;
	for (i = 0; i < wcount; i++)
	{
		while (str[pos] == ' ')
			pos++;
		j = pos;
		while (str[j] != ' ' && str[j] != '\0')
			j++;
		words[i] = malloc(sizeof(char) * (j - pos + 1));
		if (words[i] == NULL)
		{
			for (i = 0; i < wcount; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}
		for (j = 0; str[pos] != ' ' && str[pos] != '\0'; j++, pos++)
			words[i][j] = str[pos];

		words[i][j] = '\0';
	}
	words[wcount] = NULL;
	return (words);
}
