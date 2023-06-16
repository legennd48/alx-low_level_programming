#include <stdio.h>

/**
 *main - function prints the alphabet in lowercase, no q and e, followd be \n
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha < '{')
	{
		if ((alpha == 'e') || (alpha == 'q'))
		{
			alpha++;
		}
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
