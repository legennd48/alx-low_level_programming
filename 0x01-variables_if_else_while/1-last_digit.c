#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *Main - Prints last digit of a number and determins wether it is 0, >5 or <6.
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	if (m == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	if ((m < 6) && (m != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
