#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns length of a dlistint list
 * @h: head of list
 * Return: length of list. 0 if does not exist
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t n = 0;

	while (temp)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}
