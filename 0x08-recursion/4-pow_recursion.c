#include "main.h"
/**
 * _pow_recursion - raises x to the power of y and returns result
 * @x: integer to be raised
 * @y: power
 * Return: 1 or result
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		y -= 1;
		return (x * _pow_recursion(x, y));
	}
}
