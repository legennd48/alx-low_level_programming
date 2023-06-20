#include <unistd.h>

/**
 *_putchar - writes a character to standard output
 *@a: character to be printed
 *Return: Always 0 (Success)
 */

int _putchar(char a)
{
	return (write(1, &a, 1));
}
