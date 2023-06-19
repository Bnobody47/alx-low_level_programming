#include "main.h"

/**
 * _memcpy - Copies from src to dest
 * @dest: copy to
 * @src: copy from
 * @n: integer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
