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
	char *e = "Error", operators[5] = {'+', '-', '*', '/', '%'};
	int (*calc)(int, int), i;

	if (argc != 4)
	{
		printf("%s\n", e);
		exit(98);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("%s\n", e);
		exit(100);
	}
	for (i = 0; i < 5; i++)
	{
		if (operators[i] == argv[2][0])
		{
			calc = get_op_func(argv[2]);
			printf("%d\n", calc(atoi(argv[1]), atoi(argv[3])));
			return (0);
		}
	}
	printf("%s\n", e);
	exit(99);
}
