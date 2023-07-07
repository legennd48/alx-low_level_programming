#include "main.h"

/**
 * _abs - computes the absolite value of a number
 * @n: number to be compited
 * Return: 0
 */
int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-n);
	}
	return (0);
}
