#include "main.h"

/**
 * rot13 - rotate character 13
 * @s: string
 * Return: string 's' rotated
 */

char *rot13(char *s)
{
	int i;
	
	char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char s2[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			s[i] = (s[i] - 65 > 25) ?
				s2[s[i] - 97] : s1[s[i] - 65];
		}
	}
	return (s);
}
