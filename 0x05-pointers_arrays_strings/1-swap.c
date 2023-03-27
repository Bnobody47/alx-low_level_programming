#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Integer one
 * @b: Integer two
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
