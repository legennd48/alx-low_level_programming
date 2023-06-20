#include "main.h"
/**
 * print_alphabet - prints letters a to z
 * Return: 0
 */

void print_alphabet(void)
{
	char alpha = 'a';
	while (alpha < '{')
	{
		_putchar(alpha);
		_putchar('\n');
		alpha++;
	}
	return (0);
}
