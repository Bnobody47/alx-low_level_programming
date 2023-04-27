#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - A function which prints the list
 * @h: The pointer
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	int count;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
