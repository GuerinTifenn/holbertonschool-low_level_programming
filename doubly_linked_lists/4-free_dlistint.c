#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head of the linked list
 * Return: number of nodes in the linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	dlistint_t *next;

	while (h)
	{
		next = h->next;
		free(h);
		h = next;
	}
}
