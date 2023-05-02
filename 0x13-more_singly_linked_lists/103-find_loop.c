#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: the first node
 * Return: The address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *inj, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	inj = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (inj == hare)
		{
			inj = head;

			while (inj != hare)
			{
				inj = inj->next;
				hare = hare->next;
			}
			return (inj);
		}

		inj = inj->next;
		hare = (hare->next)->next;
	}

	return (NULL);
}
