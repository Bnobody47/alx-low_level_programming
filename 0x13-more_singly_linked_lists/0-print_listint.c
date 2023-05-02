#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a listint_t
 * @h: a pointer to the head
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *add = h;

	while (add != NULL)
	{
		printf("%d\n", add->n);
		add = add->next;
		i++;
	}
	return (i);
}
