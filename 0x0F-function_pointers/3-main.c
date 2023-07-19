#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - recieves arguments to perform math operations according to the
 * arguments recieved. this is a simple calculator
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *e = "Error";
	int (*calc)(int, int), a, b;

	if (argc != 4)
	{
		printf("%s\n", e);
		exit(98);
	}

	calc = get_op_func(argv[2]);

	if (calc == NULL)
	{
		printf("%s\n", e);
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("%s\n", e);
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", calc(a, b));

	return (0);

}
