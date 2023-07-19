#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: argument vector - number of bytes to be printed
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	char *e = "Error", *ar = (char *)main;
	int bytes, i;

	if (argc != 2)
	{
		printf("%s\n", e);
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0 || bytes < ((char *)main - ar + bytes))
	{
		printf("%s\n", e);
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		if (i == (bytes - 1))
		{
			printf("%02hhx ", ar[i]);
			break;
		}
		printf("%02hhx ", ar[i]);
	}
	return (0);
}
