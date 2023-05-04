#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint -  a function that converts a binary number to an unsigned int
 * @b: a pointer to a string
 * Return: the converten number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mul = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i];)
		i++;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num += (b[i] - '0') * mul;
		mul *= 2;
	}

	return (num);
}
