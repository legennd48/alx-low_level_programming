#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * error - prints Error and exits with 98
 */


void error(void)
{
	char e[] = {'E', 'r', 'r', 'o', 'r', '\n'};
	int i;

	for (i = 0; i < 6; i++)
		_putchar(e[i]);
	exit(98);
}

/**
 * main - multiplies 2 positive integers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 on success otherwise 1 or 98
 */

int main(int argc, char **argv)
{
	char *num1 = argv[1], *num2 = argv[2];
	unsigned long int *holder, digit;
	int i, j = 0;

	if (argc != 3)
		error();
	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!isdigit(num1[i]))
			error();
		j++;
	}
	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!isdigit(num2[1]))
			error();
		j++;
	}
	holder = malloc(j * sizeof(unsigned long int));

	if (!holder)
		error();

	*holder = strtoull(num1, NULL, 10) * strtoull(num2, NULL, 10);

	while (*holder > 0)
	{
		digit = *holder % 10;
		_putchar('0' + digit);
		*holder /= 10;
	}
	_putchar('\n');

	free(holder);

	return (0);

}
