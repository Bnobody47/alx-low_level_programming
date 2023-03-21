#include "main.h"

/**
 * _isalpha - function point
 * @c: Character to check
 * Return: 1 if lowercase or uppercase or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
