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
	char *e = "Error";
	int (*ar)(int, char**) = main;
	int bytes, i, main_bytes = 0;

	if (argc != 2)
	{
		printf("%s\n", e);
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("%s\n", e);
		exit(2);
	}
	while (main_bytes < bytes)
	{
		if (((char *)ar)[main_bytes] == '\0')
			break;
		main_bytes++;
	}

	for (i = 0; i < bytes && i < main_bytes; i++)
	{
		if (i == (bytes - 1) || i == (main_bytes - 1))
		{
			printf("%.2x ", *((unsigned char *)(ar + i)));
			break;
		}
		printf("%.2x ", *((unsigned char *)(ar + i)));
	}
	printf("\n");
	return (0);
}
