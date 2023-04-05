#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: string
 * Return: The length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i = _strlen_recursion(s + 1);
		return (i += 1);
	}
	return (i);
}
