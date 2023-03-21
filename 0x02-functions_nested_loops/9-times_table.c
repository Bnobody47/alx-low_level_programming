#include "main.h"

/**
 * times_tabel - print multiplication table
 */
void times_tabel(void)
{
	int r;
	int c;
	int p;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			p = (r * c);

			if (c == 0)
			{
				_putchar('0' + p);
			}
			else if (p <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + p);
			}
			else if (p > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (p / 10));
				_putchar('0' + (p % 10));
			}
		}
		_putchar('\n');
	}
}
