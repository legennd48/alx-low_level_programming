#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: argument vector - number of bytes to be printed
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	char *e = "Error";
	int bytes, i;/*main_bytes = 0;*/
	/*unsigned char *main_ptr;*/

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

	/*main_ptr = (unsigned char *)main;*/
	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}





/*
 *  for (i = 0; i < bytes; i++)
 *	{
 *		printf("%.2x ", main_ptr[i]);
 *	}
 *	printf("\n");
 *	return (0);
 */
