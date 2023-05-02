#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint2 - a function that frees
 * @head: the first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!(head && *head))
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
