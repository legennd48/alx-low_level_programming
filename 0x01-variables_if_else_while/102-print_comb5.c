#include <stdio.h>

/**
 *main - prints 2 sets of unique 2 digit numbers
 *seperated by comma and space.
 *Return: Always 0 (Success)
 */
int main(void)
{
	int d1;
	int d2;
	int d3;
	int d4;

	for (d1 = '0'; d1 <= '9'; d1++)
	{
		for (d2 = '0'; d2 <= '9'; d2++)
		{
			for (d3 = d1; d3 <= '9'; d3++)
			{
				for (d4 = d2 + 1 ; d4 <= '9'; d4 = 1 + d4)
				{
					putchar(d1);
					putchar(d2);
					putchar(' ');
					putchar(d3);
					putchar(d4);
					if (!((d1 == '9' && d2 == '8') && (d4 == '9' && d3 == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
