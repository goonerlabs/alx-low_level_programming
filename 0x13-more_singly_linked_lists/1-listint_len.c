#include "lists.h"
/**
 * listint_len - returns the number of elements
 *
 * @h: a pointer to the head node
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}

