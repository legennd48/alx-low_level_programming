#include <stdio.h>

/**
 *main - Uses putchar only to print 0-9 to standard output
 *
 *Return: always 0 (Successs)
*/

int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
