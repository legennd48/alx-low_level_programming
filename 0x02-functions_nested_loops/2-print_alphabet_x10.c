#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int i;

	for (i = 0; i < 10; i++)
	{
		alpha = 'a';
		while (alpha < '{')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
