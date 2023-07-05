#include "main.h"
int true_prime(int n, int m);

/**
 * is_prime_number - checks if number is prime
 * @n: number to be checked
 * Return: 1 if prime 0 if not.
 */


int is_prime_number(int n)
{
	int m = 3;

	if (n <= 1 || n % 2 == 0)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (true_prime(n, m));
}

/**
 * true_prime - recursively checes if number is devisible by other
 * numbers besides itself.
 * @n: number being checked
 * @m: the increasing divisor
 * Return: 1 it false, 0 if true
 */
int true_prime(int n, int m)
{
	if (n == m)
	{
		return (1);
	}
	if (n % m == 0)
	{
		return (0);
	}
	return (true_prime(n, m + 1));
}
