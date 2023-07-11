#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments to the program to a string with
 * each argument seperated by a new line
 * @ac: number of arguments.
 * @av: arguments recieved.
 * Return: Null or pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, tcount = 0;
	char *new;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		tcount += j + 1;
	}
	new = (char *) malloc(tcount * sizeof(char));

	if (new == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new[k] = av[i][j];
			k++;
		}
		new[k] = '\n';
		k++;
	}
	new[k] = '\0';

	return (new);
}
