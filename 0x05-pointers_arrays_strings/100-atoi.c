#include "main.h"

/**
 *_atoi - function that convert a string to an integer.
 *@s: string to be recieved for conversion
 *Return: result
 */


int _atoi(char *s)
{
	int n, count, i, lent, flg, cVal;

	n = 0;
	count = 0;
	i = 0;
	lent = 0;
	flg = 0;
	cVal = 0;

	while (s[lent] != '\0')
	{
		lent++;
	}

	while (i < lent && flg == 0)
	{
		if (s[i] == '-')
		{
			++count;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			cVal = s[i] - '0';

			if (count % 2)
			{
				cVal = -cVal;
			}

			n = n * 10 + cVal;

			flg = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			flg = 0;
		}
		i++;
	}

	if (flg == 0)
	{
		return (0);
	}

	return (n);
}
