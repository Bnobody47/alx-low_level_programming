#include "main.h"

/**
 * print_line - Print '_'
 * @n: Times character
 */

void print_line(int n)
{
	int times;

	if (n > 0)
	{
		for (times = 0; times < n; times++)
			_putchar('_');
	}
	_putchar('\n');
}
