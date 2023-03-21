#include "main.h"
/**
 * print_sign - Function
 * @n: Charecter to check
 * Return: print 1 if n is greater that zero,
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
