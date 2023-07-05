#include "main.h"

int _strlen_r(char *s);
int true_pal(char *start, char *end);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen_r(s);

	if (len < 2)
	{
		return (1);
	}
	else
	{
		return (true_pal(s, s + len - 1));
	}
}

/**
 * _strlen_r - checks the lengt of a string by recursion
 * @s: string to be checked
 * Return: length of string
 */

int _strlen_r(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_r(s + 1));
	}
}

/**
 * true_pal - compares string beginning  and end towards
 * the middllle to c if they are the same
 * @start: beginning of string
 * @end: end of string before '\0'
 * Return: 0, 1, depending on what is found
 */

int true_pal(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*start == *end)
	{
		return (true_pal(start + 1, end - 1));
	}
	return (0);
}
