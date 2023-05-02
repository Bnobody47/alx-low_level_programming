#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - a function that adds a new node at the end
 * @head: the first pointer
 * @n: number
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *temp;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = add;

	return (add);
}
