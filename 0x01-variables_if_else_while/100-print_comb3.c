#include <stdio.h>

/**
 *main - Writes different combinations of two digits seperated be commas
 *Return: Always 0 (Success)
 */

int main(void)
{
	int d1;
	int d2;

	for (d1 = '0'; d1 <= '9'; d1++)
	{
		for (d2 = (d1 + 1); d2 <= '9'; d2++)
		{
			putchar(d1);
			putchar(d2);
			if ((d1 < '8') || (d2 < '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
