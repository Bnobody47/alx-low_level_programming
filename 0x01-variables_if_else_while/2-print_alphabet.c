#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');

	return (0);
}
