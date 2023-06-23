#include <stdio.h>

/**
 *main - prints sum of all even fibonacci numbers less than 4000000
 *Return: 0
 */

int main(void)
{
	unsigned long int n, n1, n2, next, sum;

	n1 = 1;
	n2 = 2;
	next = n1 + n2;
	sum = 2;


	for (n = 3; n <= 33; n++)
	{
		n1 = n2;
		n2 = next;
		next = n1 + n2;
		if (next % 2 == 0)
		{
			sum += next;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
