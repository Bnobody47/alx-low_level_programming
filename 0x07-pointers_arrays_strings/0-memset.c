#include "main.h"
/**
 * _memset - Function
 * @s: Character 1
 * @b: Character 2
 * @n: Unsigned integer
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
