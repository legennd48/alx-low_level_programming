#include <stdio.h>

/**
 *main - prints the first 50 fibonacci numbers starting with 1 and 2.
 *Return: 0
 */

int main(void)
{
	unsigned long int n, n1, n2, next;

	n1 = 1;
	n2 = 2;
	next = n1 + n2;

	printf("%lu, %lu, ", n1, n2);

	for (n = 3; n <= 50; n++)
	{
		printf("%lu, " , next);
		n1 = n2;
		n2 = next;
		next = n1 + n2;
	}
	return (0);
}
