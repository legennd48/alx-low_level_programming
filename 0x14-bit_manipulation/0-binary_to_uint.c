#include "main.h"

/**
 * binary_to_unit - converts a binary string to decimal
 * @b: string of binary num to be converte
 * Return: 0 or conversion result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int max = strlen(b), exp = max - 1, i;

	if (b == NULL)
		return (0);
	for (i = 0; i < max; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			sum += ((b[i] - '0') * (1 << exp));

		else
			return (0);
		exp--;
	}

	return (sum);
}
