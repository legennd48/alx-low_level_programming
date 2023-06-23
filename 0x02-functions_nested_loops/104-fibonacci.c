#include <stdio.h>

/**
 *main - prints the first 98 fibonacci numbers starting with 1 and 2.
 *Return: 0
 */

int main(void)
{
	unsigned long int n1 = 1, n2 = 1, s = 0;
	long int n1_h, n2_h, n1_t, n2_t, s_h, s_t;
	int control, splitter;

	printf("1");

	for (control = 2; control < 93; control++)
	{
		s = (n1 + n2);
		n1 = n2;
		n2 = s;

		printf(", %lu", s);
	}

	n1_h = (n1 / 1000000000);
	n1_t = (n1 % 1000000000);
	n2_h = (n2 / 1000000000);
	n2_t = (n2 % 1000000000);

	for (; control < 99; control++)
	{
		splitter = (n1_t + n2_t) / 1000000000;
		s_t = (n1_t + n2_t)-(1000000000 * splitter);
		s_h = (n1_h + n2_h) + splitter;

		printf(", %lu%lu", s_h, s_t);

		n1_h = n2_h;
		n1_t = n2_t;
		n2_h = s_h;
		n2_t = s_t;
	}

	printf("\n");

	return (0);
}
