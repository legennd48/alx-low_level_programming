#include <stdio.h>

/**
 * main - prints the name of the file which the program is compiled from
 * Return: 0 (Success)
 */

int main(void)
{
	char *i = __FILE__;

	printf("%s\n", i);

	return (0);

}
