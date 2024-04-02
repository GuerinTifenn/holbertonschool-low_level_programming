#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *h;

	new_node = malloc(sizeof(dlistint_t));

	if (head == NULL || new_node == NULL)
	return (0);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		h = *head;
		while (h->next != NULL)
			h = h->next;

		h->next = new_node;
		new_node->prev = h;
	}
	return (new_node);
}
