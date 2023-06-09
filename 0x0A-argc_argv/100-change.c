#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: count
 * @argv: Array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum, count;
	unsigned int i;
	char *p;
	int cent[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = strtol(argv[1], &p, 10);
	count = 0;
	if (!*p)
	{
		while (sum > 1)
		{
			for (i = 0; i < sizeof(cent[i]); i++)
			{
				if (sum >= cent[i])
				{
					count += sum / cent[i];
					sum = sum % cent[i];
				}
			}
		}
		if (sum == 1)
		count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", count);
	return (0);
}
