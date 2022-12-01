#include "lists.h"
/**
 * list_len - returns the number of element
 *
 * @h: a pointer to the head node
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}

