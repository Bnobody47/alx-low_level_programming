#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * @head: the first node
 * Return: zero
 */

int sum_listint(listint_t *head)
{
	unsigned int i = 0;
	listint_t *node_index = head;

	if (head == NULL)
		return (0);

	while (head)
	{
		i += head->n;
		node_index = head->next;
		head = node_index;
	}
	return (i);
}
