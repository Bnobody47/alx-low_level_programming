#include "main.h"

/**
 * print_diagonal - print '\'
 * @n: Times character
 */

void print_diagonal(int n)
{
	int times, space;

	if (n > 0)
	{
		for (times = 0; times < n; times++)
		{
			for (space = 0; space < times; space++)
				_putchar(' ');
			_putchar('\\');

			if (times == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
