#include <stdio.h>

/**
 * main - prints thr number of argumrnts entered
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
