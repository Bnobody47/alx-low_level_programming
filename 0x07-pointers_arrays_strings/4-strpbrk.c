#include "main.h"

/**
 * _strpbrk - searches a string for any of a set bytes
 * @s: string
 * @accept: byts in the string
 * Return: accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
