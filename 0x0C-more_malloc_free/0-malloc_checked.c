#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 * @b: size to malloc
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *q;

	q = malloc(b);
	if (q == NULL)
		exit(98);

	return (q);
}
