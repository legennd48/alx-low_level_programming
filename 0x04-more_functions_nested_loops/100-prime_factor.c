#include <stdio.h>

/**
 *main - finds and prints the largest prime factor of the number 612852475143
 *Return: 0
 */

int main(void)
{
	unsigned long int target, control;

	target = 612852475143;
	control = 2;

	while (control < target)
	{
		if (target % control == 0)
		{
			target = (target / control);
		}
		else
		{
			control++;
		}
	}
	printf("%lu\n", target);
	return (0);
}
