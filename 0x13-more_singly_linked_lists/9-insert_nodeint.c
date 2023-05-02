#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * insert_nodeint_at_index - a function that inserts a new node position
 * @head: the first node
 * @idx: is the index of the list
 * @n: number
 * Return: value of a node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *add = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = add;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (add == NULL || add->next == NULL)
			return (NULL);

		add = add->next;
	}

	new->next = add->next;
	add->next = new;

	return (new);
}
