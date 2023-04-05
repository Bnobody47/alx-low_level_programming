#include "main.h"

/**
 * helper - helper finction
 * @c: number
 * @i: increment
 * Return: return -1 if no root
 */

int helper(int c, int i)
{
	int squ;

	squ = i * i;
	if (squ == c)
		return (i);
	else if (squ < c)
		return (helper(c, i + 1));
	else
		return (-1);
}


/**
 * _sqrt_recursion - Square root
 * @n: integer
 * Return: if no root return -1
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}
