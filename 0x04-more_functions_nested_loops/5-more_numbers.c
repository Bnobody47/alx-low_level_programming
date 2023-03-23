#include "main.h"

/**
 * more_numbers - print 0 to 14 10 times
 */

void more_numbers(void)
{
	char num;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num / 10 > 0)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
