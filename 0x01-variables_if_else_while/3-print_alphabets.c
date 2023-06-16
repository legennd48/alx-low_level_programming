#include <stdio.h>

/**
 *main - prints the alphabet in lowercase
 *and then uppercase followed by a new line.
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha < '{')
	{
		putchar(alpha);
		alpha = alpha + 1;
	}

	alpha = 'A';

	while (alpha < '[')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
