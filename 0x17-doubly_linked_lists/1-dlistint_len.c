#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in a doubly linked list
 * @h: the head of the list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
