#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates howmany coins of 25 10 5 2 1 in total
 * to givr from change.
 * @argc: number of argumrnts
 * @argv: array of strings
 * Return: 0 or 1 based on success or error
 */

int main(int argc, char *argv[])
{
	int cents = 0, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	cents = atoi(argv[1]);

	coins += cents / 25;

	cents = cents % 25;

	coins += cents / 10;

	cents = cents % 10;

	coins += cents / 5;

	cents = cents % 5;

	coins += cents / 2;

	cents = cents % 2;

	coins += cents / 1;

	printf("%d\n", coins);

	return (0);
}


