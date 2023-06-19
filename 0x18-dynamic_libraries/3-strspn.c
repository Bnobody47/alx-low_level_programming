#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String segment
 * @accept: Number of bytes
 * Return: accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
		}
		if (s[j] == '\0')
			return (c);
	}
	return (c);
}
