#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Sum of two diagonals
 * @a: array
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i;
	int r = 0;
	int c = 0;

	for (i = 0; i < size; i++)
	{
		r += a[(i * size) + i];
		c += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", r, c);
}
