#include <stdio.h>

/**
 *main - prints the sum of all the multiples of 3 or 5 below 1024
 *Return: 0
 */

int main(void)
{
	int sum, control;

	sum = 0;
	for (control = 0; control < 1024; control++)
	{
		if ((control % 3 == 0) || (control % 5 == 0))
		{
			sum = (sum + control);
		}
	}
	printf("%d\n", sum);

	return (0);
}
