#include "main.h"
#include <stdio.h>

/**
 * main - Print number of argument
 * @argc: count
 * @argv: array of string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
