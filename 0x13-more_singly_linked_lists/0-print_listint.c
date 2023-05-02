#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint - a function that prints all the elements of a listint_t
 * @h: a pointer to the head
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}


	return (nodes);
}
