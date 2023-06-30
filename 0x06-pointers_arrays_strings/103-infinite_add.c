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
	int carry = 0, index1 = 0, index2 = 0, digitCount = 0;
	int value1 = 0, value2 = 0, total = 0;

	while (*(n1 + index1) != '\0')
		index1++;
	while (*(n2 + index2) != '\0')
		index2++;
	index1--;
	index2--;
	if (index2 >= size_r || index1 >= size_r)
		return (0);
	while (index2 >= 0 || index1 >= 0 || carry == 1)
	{
		if (index1 < 0)
			value1 = 0;
		else
			value1 = *(n1 + index1) - '0';
		if (index2 < 0)
			value2 = 0;
		else
			value2 = *(n2 + index2) - '0';
		total = value1 + value2 + carry;
		if (total >= 10)
			carry = 1;
		else
			carry = 0;
		if (digitCount >= (size_r - 1))
			return (0);
		*(r + digitCount) = (total % 10) + '0';
		digitCount++;
		index2--;
		index1--;
	}
	if (digitCount == size_r)
		return (0);
	*(r + digitCount) = '\0';
	rev_string(r);
	return (r);
}
