#include <stdio.h>
/**
 *main - prints all digits in the base 16 hex a-f
 *Return: Always 0 (Success)
 */
int main(void)
{
	int first = '0';
	int last = 'a';

	while (first <= '9')
	{
		putchar(first);
		first++;
	}
	while (last <= 'f')
	{
		putchar(last);
		last++;
	}
	putchar('\n');
	return (0);
}
