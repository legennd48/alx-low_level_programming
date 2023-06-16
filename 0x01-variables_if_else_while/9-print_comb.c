#include <stdio.h>
/**
 *main - prints all single digits in order seperated by comma.
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		if (a < '9')
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
