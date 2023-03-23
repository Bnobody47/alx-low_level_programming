#include "main.h"

/**
 * print_square - Print a square
 * @size: Size of a square
 */

void print_square(int size)
{
	int hig, wid;

	if (size > 0)
	{
		for (hig = 0; hig < size; hig++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');
			if (hig == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
