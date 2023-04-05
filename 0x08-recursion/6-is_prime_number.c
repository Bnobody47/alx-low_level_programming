#include "main.h"

/**
 * helper - help
 * @n: integer
 * @i: help integer
 * Return: value
 */

int helper(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (helper(i + 1, n));
	else
		return (1);
}

/**
 * is_prime_number - Prime or not prime
 * @n: integer to see if prime
 * Return: value
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	else
		return (helper(i, n));
}
