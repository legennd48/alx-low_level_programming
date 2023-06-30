#include "main.h"

/**
* rev_string - reverses a string without std libs
* @s: string to be reversed
*/
void rev_string(char *s)
{
	int lent = 0, i;
	char temp;

	while (s[lent] != '\0')
	{
		lent++;
	}

	for (i = 0; i < lent / 2; i++)
	{
		temp = s[i];
		s[i] = s[lent - 1 - i];
		s[lent - 1 - i] = temp;
	}
}
/**
*infinite_add - adds 2 numbers
*@n1: first number string to be added
*@n2: second number string to be added
*@r:  used to store the results
*@size_r: buffer size
*Return: 0 or r
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, count = 0;
	int carry = 0, num1 = 0, num2 = 0, total = 0;

	while (n1[i] != '\0')
	{
		i++;
	}
	while (n2[j] != '\0')
	{
		j--;
	}
	i--;
	j--;

    if (j >= size_r || i >= size_r)
    {
	    return (0);
    }

    while (j >= 0 || i >= 0 || carry == 1)
    {
        if (i < 0)
            num1 = 0;
        else
            num1 = n1[i] - '0';

        if (j < 0)
            num2 = 0;
        else
            num2 = n2[j] - '0';

        total = num1 + num2 + carry;

        if (total >= 10)
            carry = 1;
        else
            carry = 0;

        if (count >= (size_r - 1))
            return 0;

        r[count] = (total % 10) + '0';
        count++;
        j--;
        i--;
    }

    if (count == size_r)
        return 0;

    r[count] = '\0';
    rev_string(r);

    return r;
}
