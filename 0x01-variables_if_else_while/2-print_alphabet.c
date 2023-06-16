#include <stdio.h>

/**
 *main - prints the alphabet in lowercase followed by a new line
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha < '{')
	{
		putchar(alpha);
		putchar('\n');
		alpha = alpha + 1;
	}
	return (0);
}
