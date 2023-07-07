#include <stdio.h>

/**
 * main - adds all numbers supplied in args
 * @argc: number of arguments
 * @argv: array of arguments
 * Retutn: 0 if success 1 if error
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc )

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i])
	}

	printf("%d\n", sum);


}
