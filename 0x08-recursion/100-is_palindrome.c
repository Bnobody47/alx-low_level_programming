#include "main.h"

/**
 * length - length
 * @s: string
 * Return: length of string
 */

int length(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + length(s + 1);
		return (i += 1);
	}
	return (0);
}

/**
 * help - help function
 * @i: integer
 * @s: String
 * Return: integer value
 */

int help(int i, char *s)
{
	if (*s)
	{
		if (*s != s[length(s) - i])
		{
			return (0);
		}
		else
		{
			return (help(i + 1, s + 1));
		}
	}
	return (1);
}

/**
 * is_palindrome - is it paldindrome
 * @s: string
 * Return: vlaue
 */

int is_palindrome(char *s)
{
	int i = 1;

	return (help(i, s));
}
