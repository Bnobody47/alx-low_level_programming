#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * pop_listint - a function that deletes the head node
 * @head: the first node
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	int val = 0;
	listint_t *next_node = NULL;

	if (*head == NULL)
	{
		return (0);
	}

	next_node = (*head)->next;
	val = (*head)->n;
	free(*head);
	*head = next_node;

	return (val);
}
