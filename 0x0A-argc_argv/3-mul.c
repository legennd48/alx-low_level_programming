#include <stdio.h>

/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv: array or args
 * Return: 0
 */

int main(int argc, char **argv)
{
	int result;

	result = atoi(argv[1]) * atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", result);
	}

	return (0);
}

